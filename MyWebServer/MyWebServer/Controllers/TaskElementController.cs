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
    }
}
