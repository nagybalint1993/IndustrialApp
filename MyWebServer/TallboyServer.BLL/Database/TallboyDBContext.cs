using Microsoft.AspNet.Identity.EntityFramework;
using System;
using System.Collections.Generic;
using System.Data.Entity;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IndustrialAppServer.Models;
using IndustrialAppServer.BLL.Models;

namespace IndustrialAppServer.BLL.Database
{
    public class TallboyDBContext : IdentityDbContext<ApplicationUser>
    {
        //protected override void OnModelCreating(DbModelBuilder modelBuilder)
        //{
        //    System.Data.Entity.Database.SetInitializer<TallboyDBContext>(null);
        //    base.OnModelCreating(modelBuilder);
        //}
        public TallboyDBContext()
    : base("DefaultConnection", throwIfV1Schema: false)
        {
            Configuration.ProxyCreationEnabled = false;
            Configuration.LazyLoadingEnabled = false;
        }

        public static TallboyDBContext Create()
        {
            return new TallboyDBContext();
        }

        public DbSet<Container> Containers { get; set; }

        public DbSet<ContainerPart> ContainerParts { get; set; }

        public DbSet<ContainerPartContent> ContainerPartContents { get; set; }

        public DbSet<IndustrialAppServer.Models.Task> Tasks { get; set; }

        public DbSet<IndustrialAppServer.Models.TaskInstance> TaskInstances { get; set; }

        public DbSet<TaskElement> TaskElements { get; set; }

        public DbSet<IndustrialAppServer.Models.Type> Types { get; set; }

        public DbSet<Video> Videos { get; set; }

    }
}
