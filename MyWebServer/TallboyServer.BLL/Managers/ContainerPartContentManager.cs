using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TallboyBLL.Models;
using TallboyServer.BLL.Database;
using TallboyServer.BLL.DTO;
using TallboyServer.BLL.Exceptions;

namespace TallboyServer.BLL.Managers
{
    public class ContainerPartContentManager
    {
        public List<TallboyBLL.Models.ContainerPartContent> GetContainerPartContents()
        {
            using (var ctx = new TallboyDBContext())
            {
                var containerPartContent = ctx.ContainerPartContents.ToList();

                if (containerPartContent == null) throw new TallboyServerException("Can't find any ContainerPartContent in the database.");

                return containerPartContent;
            }
        }

        public List<TallboyBLL.Models.ContainerPartContent> GetContainerPartContentToType(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var containerPartContent = ctx.ContainerPartContents.Where(t => t.TypeId == id).ToList();

                if (containerPartContent == null)
                    throw new TallboyServerException("Any ContainerPartContent don't have TaskId: " + id.ToString() + " in the database.");

                return containerPartContent;
            }
        }

        public ContainerPartContent AddContent(ContainerPartContent containerPartContent)
        {
            using (var ctx = new TallboyDBContext())
            {
                var cpc= ctx.ContainerPartContents.Add(containerPartContent);
                ctx.SaveChanges();
                return cpc;
            }
        }

        public ContainerPartContent UpdateContent(int id, ContainerPartContent containerPartContent)
        {
            using (var ctx = new TallboyDBContext())
            {
                var cpc = ctx.ContainerPartContents.FirstOrDefault(f => f.Id==id);
                if (cpc == null || containerPartContent.Id != id)
                    throw new Exception();
                cpc.TypeId = containerPartContent.TypeId;
                cpc.ContainerPartId = containerPartContent.ContainerPartId;
                cpc.Amount = containerPartContent.Amount;
                ctx.SaveChanges();
                return cpc;
            }
        }

        public List<ContentWithNameDTO> getContentWithNameToPart(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                List<ContentWithNameDTO> contentsWithName= new List<ContentWithNameDTO>();

                var content= ctx.ContainerPartContents.Where(c => c.Id == id);
                if (content == null)
                    throw new Exception("There isn't content in the database with the given id.");

                foreach(var c in content)
                {
                    var cwNameDto = new ContentWithNameDTO();
                    cwNameDto.ContainerPartId = c.ContainerPartId;
                    
                    cwNameDto.Amount = c.Amount;
                    cwNameDto.id = c.Id;

                    var type = ctx.Types.FirstOrDefault(t => t.Id == c.TypeId);
                    if (type != null)
                    {
                        cwNameDto.TypeId = type.Id;
                        cwNameDto.TypeName = type.Name;
                    }

                    contentsWithName.Add(cwNameDto);
                }

                return contentsWithName;

            }
        }

        public ContainerPartContent DeleteContent(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var cpc = ctx.ContainerPartContents.FirstOrDefault(c => c.Id == id);
                ctx.ContainerPartContents.Remove(cpc);
                ctx.SaveChanges();
                return cpc;
            }
        }
    }
}
