using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using IndustrialAppServer.Models;
using IndustrialAppServer.BLL.Database;
using IndustrialAppServer.BLL.DTO;
using IndustrialAppServer.BLL.Exceptions;

namespace IndustrialAppServer.BLL.Managers
{
    public class TaskElementManager
    {
        public List<IndustrialAppServer.Models.TaskElement> GetTaskElementToTask(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var taskElements = ctx.TaskElements.Where(t => t.TaskId == id).ToList();

                if (taskElements == null) throw new TallboyServerException("Can't find any Taskelement in the database to the task");

                return taskElements;
            }
        }

        public IndustrialAppServer.Models.TaskElement GetTaskElement(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var taskElement = ctx.TaskElements.FirstOrDefault(t => t.Id == id);

                if (taskElement == null)
                    throw new TallboyServerException("Can't find TaskElement with the ID: " + id.ToString() + " in the database.");

                return taskElement;
            }
        }

        public TaskElement RemoveTaskElement(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                var taskelement = ctx.TaskElements.FirstOrDefault(t => t.Id == id);
                if (taskelement == null)
                    throw new Exception("Can't find TaskElement with the ID: " + id.ToString());

                ctx.TaskElements.Remove(taskelement);
                ctx.SaveChanges();
                return taskelement;
            }
        }

        public TaskElement UpdateTaskElement(int id, TaskElement newTaskElement)
        {
            using (var ctx = new TallboyDBContext())
            {
                var taskelement = ctx.TaskElements.FirstOrDefault(t => t.Id == id);
                if (taskelement == null || newTaskElement.Id != id)
                    throw new Exception("Can't find TaskElement with the ID: " + id.ToString());

                taskelement.Name = newTaskElement.Name;
                taskelement.Description = newTaskElement.Description;
                taskelement.TypeId = newTaskElement.TypeId;
                if(taskelement.Order!= newTaskElement.Order)
                {
                    //TODO átrendezés
                    taskelement.Order = newTaskElement.Order;
                }

                ctx.SaveChanges();
                return taskelement;
            }
        }

        public TaskElement AddTaskElement(TaskElement newTaskElement)
        {
            using (var ctx = new TallboyDBContext())
            {
                var taskelement= ctx.TaskElements.Add(newTaskElement);
                ctx.SaveChanges();
                return taskelement;
            }
        }

        public IEnumerable<StepWithName> getStepsToTask(int id)
        {
            using (var ctx = new TallboyDBContext())
            {
                List<StepWithName> steplist = new List<StepWithName>();

                var steps = ctx.TaskElements.Where(s => s.TaskId == id).ToList();
                if (steps == null)
                    throw new Exception("Can't find TaskElement with the ID: " + id.ToString());

                foreach (var step in steps)
                {
                    StepWithName stepWithName = new StepWithName();
                    stepWithName.Id = step.Id;
                    stepWithName.Name = step.Name;
                    stepWithName.Order = step.Order;
                    stepWithName.TaskId = step.TaskId;
                    stepWithName.TypeId = step.TypeId;
                    stepWithName.Description = step.Description;

                    var type = ctx.Types.FirstOrDefault(t => t.Id == step.TypeId);
                    if(type != null)
                    {
                        stepWithName.TypeName = type.Name;
                    }

                    steplist.Add(stepWithName);
                }

                return steplist;
            }
        }

        public List<IndustrialAppServer.Models.TaskElement> GetTaskElement()
        {
            using (var ctx = new TallboyDBContext())
            {
                var taskElement = ctx.TaskElements.ToList();

                if (taskElement == null)
                    throw new TallboyServerException("Can't find any TaskElement in the database.");

                return taskElement;
            }
        }
    }
}
