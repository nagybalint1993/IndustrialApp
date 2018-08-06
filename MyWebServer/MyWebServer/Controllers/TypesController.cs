using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using System.Web.Http.Cors;
using TallboyServer.BLL.Managers;

namespace MyWebServer.Controllers
{
    public class TypesController : ApiController
    {
        // GET api/<controller>
        //[HttpGet]
        public IEnumerable<TallboyBLL.Models.Type> Get()
        {
            return new TypeManager().GetTypeList();
        }

        // GET api/<controller>/5
        [HttpGet]
        public TallboyBLL.Models.Type Get(int id)
        {
            return new TypeManager().GetType(id);
        }



        // POST api/<controller>
        [Route("")]
        [HttpPost]
        public TallboyBLL.Models.Type Post([FromBody]TallboyBLL.Models.Type type)
        {

            return new TypeManager().AddType(type);
        }

        // PUT api/<controller>/5
        [Route("")]
        [HttpPut]
        public IHttpActionResult Put(int id, [FromBody]TallboyBLL.Models.Type type)
        {
            new TypeManager().UpdateType(id, type);
            return Ok();
        }

        // DELETE api/<controller>/5
        [Route("")]
        [HttpDelete]
        public IHttpActionResult Delete(int id)
        {
            new TypeManager().DeleteType(id);
            return Ok();
        }

        

    }
}