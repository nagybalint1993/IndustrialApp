using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IndustrialAppServer.Models;
using IndustrialAppServer.BLL.Database;

namespace IndustrialAppServer.BLL.Managers
{
    public class ContainerManager
    {

        public IEnumerable<Container> GetContainerList()
        {
            using(var ctx = new TallboyDBContext())
            {
                var list = ctx.Containers.ToList();
                if (list == null)
                    throw new Exception("Can't find any Container in the database");

                return list;
            }
        }

        public Container GetContainer(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var container = ctx.Containers.FirstOrDefault(f => f.Id == id);
                if (container == null)
                    throw new Exception();

                return container;
            }
        }


        public Container AddContainer(Container container)
        {
            using (var ctx = new TallboyDBContext())
            {
                var newContainer = ctx.Containers.Add(container);
                ctx.SaveChanges();
                return newContainer;
            }
        }

        public Container Updatecontainer(int id, Container newContainer)
        {
            using (var ctx = new TallboyDBContext())
            {
                var container = ctx.Containers.FirstOrDefault(f => f.Id == id);
                if (container == null || newContainer.Id != id)
                    throw new Exception();

                //ctx.Types.Attach(newType);
                //ctx.Entry(newType).State = EntityState.Modified;

                container.Name = newContainer.Name;
                container.Description = newContainer.Description;
                container.ContainerImageId = newContainer.ContainerImageId;
                ctx.SaveChanges();
                return container;
            }
        }

        public void DeleteContainer(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var container = ctx.Containers.FirstOrDefault(t => t.Id == id);
                ctx.Containers.Remove(container);
                ctx.SaveChanges();
            }
        }
    }
}
