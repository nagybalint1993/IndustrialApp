using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IndustrialAppServer.BLL.Database;
using IndustrialAppServer.BLL.Exceptions;

namespace IndustrialAppServer.BLL.Managers
{
    public class TaskInstanceManager
    {
        public IndustrialAppServer.Models.TaskInstance GetInstance(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.TaskInstances.FirstOrDefault(t => t.Id == id);

                if (task == null)
                    throw new TallboyServerException("Can't find Task with the ID: " + id.ToString() + " in the database.");

                return task;
            }
        }

        public IndustrialAppServer.Models.TaskInstance AddInstance(IndustrialAppServer.Models.TaskInstance newTask)
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.TaskInstances.Add(newTask);
                ctx.SaveChanges();
                return task;
            }
        }

        public IndustrialAppServer.Models.TaskInstance UpdateInstance(int id, IndustrialAppServer.Models.TaskInstance newTask)
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.TaskInstances.FirstOrDefault(t => t.Id == id);
                task.TaskId = newTask.TaskId;
                task.UserId = newTask.UserId;
                ctx.SaveChanges();
                return task;
            }
        }

        public IndustrialAppServer.Models.TaskInstance DeleteInstance(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.TaskInstances.FirstOrDefault(t => t.Id == id);
                ctx.TaskInstances.Remove(task);
                ctx.SaveChanges();
                return task;
            }
        }

        public List<IndustrialAppServer.Models.TaskInstance> GetInstance()
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.TaskInstances.ToList();

                if (task == null)
                    throw new TallboyServerException("Can't find TaskInstance in the database.");

                return task;
            }
        }
    }
}
