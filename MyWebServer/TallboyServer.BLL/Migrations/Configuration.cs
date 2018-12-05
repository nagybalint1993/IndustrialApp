namespace IndustrialAppServer.BLL.Migrations
{
    using Microsoft.AspNet.Identity;
    using Microsoft.AspNet.Identity.EntityFramework;
    using System;
    using System.Data.Entity;
    using System.Data.Entity.Migrations;
    using System.Linq;
    using IndustrialAppServer.BLL.Database;
    using IndustrialAppServer.BLL.Managers;
    using IndustrialAppServer.BLL.Models;

    internal sealed class Configuration : DbMigrationsConfiguration<IndustrialAppServer.BLL.Database.TallboyDBContext>
    {
        public Configuration()
        {
            AutomaticMigrationsEnabled = false;
        }

        protected override void Seed(IndustrialAppServer.BLL.Database.TallboyDBContext context)
        {
            //  This method will be called after migrating to the latest version.

            //  You can use the DbSet<T>.AddOrUpdate() helper extension method 
            //  to avoid creating duplicate seed data.

            var manager = new UserManager<ApplicationUser>(new UserStore<ApplicationUser>(new TallboyDBContext()));

            var user = new ApplicationUser()
            {
                Id="1",
                UserName = "Nagy Bálint György",
                Email = "nagybalint1993@gmail.com",
                EmailConfirmed = true,
                QRstring= "Nagy Bálint György"
            };
            manager.Create(user, "1111");

            new TaskManager().AddTask(new IndustrialAppServer.Models.Task() { Id = 1, Name = "TestTask", Description = "test" });
            new TaskInstanceManager().AddInstance(new IndustrialAppServer.Models.TaskInstance() { Id = 1, TaskId = 1, UserId = "1" });
        }
    }
}
