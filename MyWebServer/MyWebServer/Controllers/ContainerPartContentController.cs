using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using TallboyBLL.Models;
using TallboyServer.BLL.DTO;
using TallboyServer.BLL.Managers;

namespace MyWebServer.Controllers
{
    public class ContainerPartContentController : ApiController
    {
        // GET: api/ContainerPartContent
        public IEnumerable<ContainerPartContent> Get()
        {
            return new ContainerPartContentManager().GetContainerPartContents();
        }

        // GET: api/ContainerPartContent/5
        public IEnumerable<ContainerPartContent> Get(int id)
        {
            return new ContainerPartContentManager().GetContainerPartContentToType(id);
        }

        public IEnumerable<ContainerPartContent> ToType(int id)
        {
            return new ContainerPartContentManager().GetContainerPartContentToType(id);
        }

        

        // POST: api/ContainerPartContent
        public ContainerPartContent Post([FromBody]ContainerPartContent containerPartContent)
        {
            return new ContainerPartContentManager().AddContent(containerPartContent);
        }

        // PUT: api/ContainerPartContent/5
        public ContainerPartContent Put(int id, [FromBody]ContainerPartContent containerPartContent)
        {
            return new ContainerPartContentManager().UpdateContent(id,containerPartContent);
        }

        // DELETE: api/ContainerPartContent/5
        public ContainerPartContent Delete(int id)
        {
            return new ContainerPartContentManager().DeleteContent(id);
        }

        [HttpGet]
        [Route("api/containerpartcontent/listWithName/{id}")]
        public IEnumerable<ContentWithNameDTO> getContentWithNameToPart(int id)
        {
            return new ContainerPartContentManager().getContentWithNameToPart(id);
        }

        
    }
}
