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
    using IndustrialAppServer.Models;
    using System.Collections.Generic;

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

            var task =  new Task() { Id = 1, Name = "PCB soldering", Description = "Your task is to solder a PCB. You have to complete the subtasks one after the other. In order to accomplish some of the subtasks, you need components, which you can find in the drawer’s red box. The QR codes, found on the components, have to be scanned. The model helps you to position the components to the right place." } ;
            context.Tasks.AddOrUpdate(s => s.Id, task);
            context.SaveChanges();

            var taskElementList = new List<TaskElement>()
            {
                new TaskElement(){Id= 1, Name="1. Board" , Description = "Take the PCB from the red box and place it on the table. ", Order=1 , TaskId= 1, TypeId= 1},
                new TaskElement(){Id=2, Name="2. Take the IC", Description = "Take the 74HC14 IC from the red box. Position it to the selected footprint and solder it.",TaskId=1, TypeId=2, Order=2 },
                new TaskElement(){Id=3, Name="3. Apply soldering paste", Description = "Apply soldering paste on the highlighted pads.",TaskId=1, Order=3},
                new TaskElement(){Id=4, Name="4. Capacitor 1u", Description = "Take a 1u capacitor from the red box, and position it on the selected footprint.",TaskId=1, TypeId=3, Order=4 },
                new TaskElement(){Id=5, Name="5. Resistor 474k", Description = "Take a 470k resistor from the red box, and position it on the selected footprint.",TaskId=1, TypeId=4, Order=5 },
                new TaskElement(){Id=6, Name="6. Polyfuse", Description = "Take a polyfuse from the red box, and position it on the selected footprint.",TaskId=1, TypeId=5, Order=6 },
                new TaskElement(){Id=7, Name="7. Capacitor 100n", Description = "Take a 100n capacitor from the red box, and position it on the selected footprint.",TaskId=1, TypeId=6, Order=7 },
                new TaskElement(){Id=8, Name="8. Resistor 220R", Description = "Take two 220R resistors from the red box, and position them on the selected footprint.",TaskId=1, TypeId=7, Order=8 },
                new TaskElement(){Id=9, Name="9. Soldering", Description = "Solder all placed components using the hot air gun. ",TaskId=1, Order=9,TypeId=0 },
                new TaskElement(){Id=10, Name="10. The PCB is ready.", Description = "",TaskId=1, Order=10,TypeId=0 }
            };
            taskElementList.ForEach(t => context.TaskElements.AddOrUpdate(s => s.Id, t));
            context.SaveChanges();

            var typeList = new List<IndustrialAppServer.Models.Type>()
            {
                new IndustrialAppServer.Models.Type(){Id=1, Name="Board_autsoft", Description="-", UUID= "Board_autsoft"},
                new IndustrialAppServer.Models.Type(){Id=2, Name="soic_14", Description="-", UUID= "464d6419-d6ed-4229-9509-890cd5807f9b" },
                new IndustrialAppServer.Models.Type(){Id=3, Name="capacitor_0805_1", Description="-", UUID= "capacitor_0805_1"},
                new IndustrialAppServer.Models.Type(){Id=6, Name="capacitor_0805_2", Description="-", UUID= "capacitor_0805_2" },
                new IndustrialAppServer.Models.Type(){Id=7, Name="resistor_221", Description="-", UUID= "resistor_221" },
                new IndustrialAppServer.Models.Type(){Id=4, Name="resistor_474", Description="-", UUID= "resistor_474" },
                new IndustrialAppServer.Models.Type(){Id=5, Name="polyfuse_1812", Description="-", UUID= "057d09e2-2bc7-4098-8ba0-ad428f3ddf41" },
                new IndustrialAppServer.Models.Type(){Id=8, Name="led_02", Description="-", UUID= "led_02" }
            };
            typeList.ForEach(t => context.Types.AddOrUpdate(c => c.Id, t));
            context.SaveChanges();

            var container = new Container() { Id = 1, Name = "MyContainer", Description = "This container contains the types of the PCB soldering task." };
            context.Containers.AddOrUpdate(c => c.Id, container);

            var containerPartList = new List<ContainerPart>
            {
                new ContainerPart{ContainerId=1, Id=1, XCoordinate= 0, YCoordinate= 0, Height= 55, Width= 270 },
                new ContainerPart{ContainerId=1, Id=2, XCoordinate= 0, YCoordinate= 66, Height= 55, Width= 130 },
                new ContainerPart{ContainerId=1, Id=3, XCoordinate= 140, YCoordinate= 66, Height= 55, Width= 130 },
                new ContainerPart{ContainerId=1, Id=4, XCoordinate= 0, YCoordinate= 130, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=5, XCoordinate= 55, YCoordinate= 130, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=6, XCoordinate= 110, YCoordinate= 130, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=7, XCoordinate= 165, YCoordinate= 130, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=8, XCoordinate= 220, YCoordinate= 130, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=9, XCoordinate= 0, YCoordinate= 185, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=10, XCoordinate= 55, YCoordinate= 185, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=11, XCoordinate= 110, YCoordinate= 185, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=12, XCoordinate= 165, YCoordinate= 185, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=13, XCoordinate= 220, YCoordinate= 185, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=14, XCoordinate= 0, YCoordinate= 240, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=15, XCoordinate= 55, YCoordinate= 240, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=16, XCoordinate= 110, YCoordinate= 240, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=17, XCoordinate= 165, YCoordinate= 240, Height= 35, Width= 45 },
                new ContainerPart{ContainerId=1, Id=18, XCoordinate= 220, YCoordinate= 240, Height= 35, Width= 45 },
            };
            containerPartList.ForEach(cp => context.ContainerParts.AddOrUpdate(p => p.Id, cp));
            context.SaveChanges();


            var containerPartContentList = new List<ContainerPartContent>()
            {
                new ContainerPartContent(){Id= 1, TypeId=1, Amount=1,ContainerPartId= 3},
                new ContainerPartContent(){Id= 2, TypeId=2, Amount=2, ContainerPartId= 17},
                new ContainerPartContent(){Id= 3, TypeId=3, Amount=1,ContainerPartId= 7},
                new ContainerPartContent(){Id= 4, TypeId=4, Amount=2, ContainerPartId= 12},
                new ContainerPartContent(){Id= 5, TypeId=5, Amount=1,ContainerPartId= 5},
                new ContainerPartContent(){Id= 6, TypeId=6, Amount=2, ContainerPartId= 10},
                new ContainerPartContent(){Id= 7, TypeId=7, Amount=1,ContainerPartId= 11},
                new ContainerPartContent(){Id= 8, TypeId=8, Amount=2, ContainerPartId= 15}
            };
            containerPartContentList.ForEach(cpc => context.ContainerPartContents.AddOrUpdate(c => c.Id, cpc));
        }
    }
}
