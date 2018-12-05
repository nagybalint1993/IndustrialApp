using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IndustrialAppServer.Models;
using IndustrialAppServer.BLL.Database;
using IndustrialAppServer.BLL.Exceptions;

namespace IndustrialAppServer.BLL.Managers
{
    public class ContainerPartManager
    {
        public IndustrialAppServer.Models.ContainerPart GetContainerPart(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var containerPart = ctx.ContainerParts.FirstOrDefault(t => t.Id == id);

                if (containerPart == null)
                    throw new TallboyServerException("Can't find ContainerPart with the ID: " + id.ToString() + " in the database.");

                return containerPart;
            }
        }

        public List<ContainerPart> GetContainerPartsByContainerId(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var container = ctx.ContainerParts.Where(p => p.ContainerId == id).ToList();
                return container;
            }
                
        }

        public List<IndustrialAppServer.Models.ContainerPart> GetContainerParts()
        {
            using (var ctx = new TallboyDBContext())
            {
                var containerPart = ctx.ContainerParts.ToList();

                if (containerPart == null)
                    throw new TallboyServerException("Can't finda any ContainerPart in the database.");

                return containerPart;
            }
        }

        public ContainerPart AddContainerPart(ContainerPart containerPart)
        {
            using (var ctx = new TallboyDBContext())
            {
                var newCp= ctx.ContainerParts.Add(containerPart);
                ctx.SaveChanges();
                return newCp;
            }
        }

    }
}
