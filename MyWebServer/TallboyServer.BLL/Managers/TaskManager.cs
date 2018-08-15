using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TallboyBLL.Models;
using TallboyServer.BLL.Database;
using TallboyServer.BLL.Exceptions;

namespace TallboyServer.BLL.Managers
{
    public class TaskManager
    {
        public TallboyBLL.Models.Task GetTask(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.Tasks.FirstOrDefault(t => t.Id == id);

                if (task == null)
                    throw new TallboyServerException("Can't find Task with the ID: " + id.ToString() + " in the database.");

                return task;
            }
        }

        public TallboyBLL.Models.Task AddTask(TallboyBLL.Models.Task newTask)
        {
            using(var ctx = new TallboyDBContext())
            {
                var task = ctx.Tasks.Add(newTask);
                ctx.SaveChanges();
                return task;
            }
        }

        public TallboyBLL.Models.Task UpdateTask(int id, TallboyBLL.Models.Task newTask)
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

        public TallboyBLL.Models.Task DeleteTask(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var task = ctx.Tasks.FirstOrDefault(t => t.Id == id);
                ctx.Tasks.Remove(task);
                ctx.SaveChanges();
                return task;
            }
        }

        public List<TallboyBLL.Models.Task> GetTask()
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
