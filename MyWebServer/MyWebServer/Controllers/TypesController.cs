using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using System.Web.Http.Cors;
using IndustrialAppServer.BLL.Managers;

namespace MyWebServer.Controllers
{
    
    public class TypesController : ApiController
    {
        // GET api/<controller>
        //[HttpGet]
        public IEnumerable<IndustrialAppServer.Models.Type> Get()
        {
            return new TypeManager().GetTypeList();
        }

        // GET api/<controller>/5
        [HttpGet]
        public IndustrialAppServer.Models.Type Get(int id)
        {
            return new TypeManager().GetType(id);
        }

        // POST api/<controller>
        [HttpPost]
        public IndustrialAppServer.Models.Type Post([FromBody]IndustrialAppServer.Models.Type type)
        {
            return new TypeManager().AddType(type);
        }

        // PUT api/<controller>/5
        [HttpPut]
        public IHttpActionResult Put(int id, [FromBody]IndustrialAppServer.Models.Type type)
        {
            new TypeManager().UpdateType(id, type);
            return Ok();
        }

        // DELETE api/<controller>/5
        [HttpDelete]
        public IHttpActionResult Delete(int id)
        {
            new TypeManager().DeleteType(id);
            return Ok();
        }

        

    }
}