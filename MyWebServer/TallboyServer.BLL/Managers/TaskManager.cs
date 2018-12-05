using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IndustrialAppServer.Models;
using IndustrialAppServer.BLL.Database;
using IndustrialAppServer.BLL.Exceptions;

namespace IndustrialAppServer.BLL.Managers
{
    public class TaskManager
    {
        public IndustrialAppServer.Models.Task GetTask(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.Tasks.FirstOrDefault(t => t.Id == id);

                if (task == null)
                    throw new TallboyServerException("Can't find Task with the ID: " + id.ToString() + " in the database.");

                return task;
            }
        }

        public IndustrialAppServer.Models.Task AddTask(IndustrialAppServer.Models.Task newTask)
        {
            using(var ctx = new TallboyDBContext())
            {
                var task = ctx.Tasks.Add(newTask);
                ctx.SaveChanges();
                return task;
            }
        }

        public IndustrialAppServer.Models.Task UpdateTask(int id, IndustrialAppServer.Models.Task newTask)
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.Tasks.FirstOrDefault(t => t.Id == id);
                task.Name = newTask.Name;
                task.Description = newTask.Description;
                ctx.SaveChanges();
                return task;
            }
        }

        public IndustrialAppServer.Models.Task DeleteTask(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.Tasks.FirstOrDefault(t => t.Id == id);
                ctx.Tasks.Remove(task);
                ctx.SaveChanges();
                return task;
            }
        }

        public List<IndustrialAppServer.Models.Task> GetTask()
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.Tasks.ToList();

                if (task == null)
                    throw new TallboyServerException("Can't find Task in the database.");

                return task;
            }
        }


    }
}
