using MyWebServer.Video;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Web;
using System.Web.Http;
using IndustrialAppServer.Models;
using IndustrialAppServer.BLL.DTO;
using IndustrialAppServer.BLL.Managers;

namespace MyWebServer.Controllers
{
    public class TaskElementController : ApiController
    {
        // GET: api/TaskElement
        public IEnumerable<TaskElement> Get()
        {
            return new TaskElementManager().GetTaskElement();
        }

        // GET: api/TaskElement/5
        public IEnumerable<TaskElement> Get(int id)
        {
            return new TaskElementManager().GetTaskElementToTask(id);
        }

        // POST: api/TaskElement
        public TaskElement Post([FromBody]TaskElement taskElement)
        {
            return new TaskElementManager().AddTaskElement(taskElement);
        }

        // PUT: api/TaskElement/5
        public TaskElement Put(int id, [FromBody]TaskElement taskElement)
        {
            return new TaskElementManager().UpdateTaskElement(id, taskElement);
        }

        // DELETE: api/TaskElement/5
        public TaskElement Delete(int id)
        {
            return new TaskElementManager().RemoveTaskElement(id);
        }

        [Route("api/taskElement/getStepsToTask/{id:int}")]
        [HttpGet]
        public IEnumerable<StepWithName> getStepsToTask(int id)
        {
            return new TaskElementManager().getStepsToTask(id);
        }

        [Route("api/taskElement/video")]
        [HttpPost]
        public HttpResponseMessage postVideo()
        {
            var file = HttpContext.Current.Request.Files.Count > 0 ? HttpContext.Current.Request.Files[0] : null;
            string filename = Path.GetFileName(file.FileName);
            file.SaveAs(System.Web.HttpContext.Current.Server.MapPath("/Videos/"+filename   ));
            IndustrialAppServer.BLL.Models.Video video = new VideoManager().AddVideo(filename);

            HttpResponseMessage response = Request.CreateResponse(HttpStatusCode.OK, video.url);
            return response;
        }

        [Route("api/video/{ext}/{filename}")]
        [HttpGet]
        public HttpResponseMessage getVideo(string filename, string ext)
        {
            var video = new VideoStream(filename , ext);

            var response = Request.CreateResponse();
            response.Content = new PushStreamContent((Action<Stream, HttpContent, TransportContext>)video.WriteToStream, new MediaTypeHeaderValue("video/" +ext));

            return response;
        }


    }
}
