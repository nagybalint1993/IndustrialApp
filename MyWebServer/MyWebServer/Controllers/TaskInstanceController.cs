using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using IndustrialAppServer.Models;
using IndustrialAppServer.BLL.Managers;

namespace MyWebServer.Controllers
{
    public class TaskInstanceController : ApiController
    {
        // GET api/Task+
        public IEnumerable<TaskInstance> Get()
        {
            return new TaskInstanceManager().GetInstance();
        }

        // GET api/Task/5
        public TaskInstance Get(int id)
        {
            return new TaskInstanceManager().GetInstance(id);
        }

        // POST api/Task
        public TaskInstance Post([FromBody]TaskInstance task)
        {
            return new TaskInstanceManager().AddInstance(task);
        }

        // PUT api/Task/5
        public TaskInstance Put(int id, [FromBody]TaskInstance task)
        {
            return new TaskInstanceManager().UpdateInstance(id, task);
        }

        // DELETE api/Task/5
        public TaskInstance Delete(int id)
        {
            return new TaskInstanceManager().DeleteInstance(id);
        }
    }
}
