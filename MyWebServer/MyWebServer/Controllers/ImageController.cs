using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web;
using System.Web.Http;
using IndustrialAppServer.Models;
using TallboyServer.BLL.Managers;

namespace MyWebServer.Controllers
{
    public class ImageController : ApiController
    {

        public IHttpActionResult PostImage()
        {
            var httpRequest = HttpContext.Current.Request;
            //Upload Image
            var postedFile = httpRequest.Files["Image"];
            string filename = Path.GetFileName(postedFile.FileName);
            var filePath = HttpContext.Current.Server.MapPath("~/Images/" + filename); 
            //Userimage myfolder name where i want to save my image
            postedFile.SaveAs(filePath);

            new ImageManager().AddImage(filePath);

            return Ok();
        }
    }
}
