using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using IndustrialAppServer.Models;
using IndustrialAppServer.BLL.Managers;

namespace MyWebServer.Controllers
{
    public class ContainerController : ApiController
    {
        // GET api/<controller>
        public IEnumerable<Container> Get()
        {
            return new ContainerManager().GetContainerList();
        }

        // GET api/<controller>/5
        public Container Get(int id)
        {
            return new ContainerManager().GetContainer(id);
        }



        // POST api/<controller>
        public Container Post([FromBody]Container container)
        {
            return new ContainerManager().AddContainer(container);
        }

        // PUT api/<controller>/5
        public Container Put(int id, [FromBody]Container container )
        {
            return new ContainerManager().Updatecontainer(id, container);
        }

        // DELETE api/<controller>/5
        public IHttpActionResult Delete(int id)
        {
            new ContainerManager().DeleteContainer(id);
            return Ok();
        }
    }
}
