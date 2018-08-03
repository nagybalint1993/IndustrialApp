using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web;
using System.Web.Http;
using TallboyBLL.Models;

namespace MyWebServer.Controllers
{
    public class TestController : ApiController
    {

        public IHttpActionResult Post()
        {
            var httpRequest = HttpContext.Current.Request;
            //Upload Image
            var postedFile = httpRequest.Files["Image"];

            return Ok();
        }
    }
}
