using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using TallboyBLL.Models;
using TallboyServer.BLL.Managers;

namespace MyWebServer.Controllers
{
    public class ContainerPartController : ApiController
    {
        // GET: api/ContainerPart
        public IEnumerable<ContainerPart> Get()
        {
            return new ContainerPartManager().GetContainerParts();
        }

        [HttpGet]
        [Route("api/containerpart/ByContainerId/{id:int}")]
        public IEnumerable<ContainerPart> ByContainerId(int id)
        {
            return new ContainerPartManager().GetContainerPartsByContainerId(id);
        }

        // GET: api/ContainerPart/5
        public ContainerPart Get(int id)
        {
            return new ContainerPartManager().GetContainerPart(id);
        }

        // POST: api/ContainerPart
        public ContainerPart Post([FromBody]ContainerPart containerPart)
        {
            return new ContainerPartManager().AddContainerPart(containerPart);
        }

        // PUT: api/ContainerPart/5
        public void Put(int id, [FromBody]string value)
        {
        }

        // DELETE: api/ContainerPart/5
        public void Delete(int id)
        {
        }
    }
}
