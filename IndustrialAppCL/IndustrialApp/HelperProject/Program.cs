using IndustrialApp.Models;
using IndustrialApp.Network.Providers;
using IndustrialApp.Presenter;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;

namespace HelperProject
{
    class Program
    {
        static void Main(string[] args)
        {
            TaskProvider taskProvider = new TaskProvider("task/");
            var x= taskProvider.GetListAsync(ListTasks).Result;
        }



        public static void ListTasks(List<Task> tasks)
        {
            foreach(Task t in tasks)
            {
                Debug.WriteLine(t.Name);
            }
        }
    }
}
