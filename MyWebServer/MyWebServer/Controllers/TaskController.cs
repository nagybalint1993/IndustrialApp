using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using TallboyBLL.Models;
using TallboyServer.BLL.Managers;

namespace TallboyServer.Controllers
{
    public class TaskController : ApiController
    {
        // GET api/Task+
        public IEnumerable<Task> Get()
        {
            return new TaskManager().GetTask();
        }

        // GET api/Task/5
        public Task Get(int id)
        {
            return new TaskManager().GetTask(id);
        }

        // POST api/Task
        public Task Post([FromBody]Task task)
        {
            return new TaskManager().AddTask(task);
        }

        // PUT api/Task/5
        public Task Put(int id, [FromBody]Task task)
        {
            return new TaskManager().UpdateTask(id,task);
        }

        // DELETE api/Task/5
        public Task Delete(int id)
        {
            return new TaskManager().DeleteTask(id);
        }
    }
}