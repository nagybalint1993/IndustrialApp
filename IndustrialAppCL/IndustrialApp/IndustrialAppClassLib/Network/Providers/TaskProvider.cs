using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using IndustrialApp.Models;
using IndustrialApp.TestData;

namespace IndustrialApp.Network.Providers
{
    class TaskProvider
    {
        internal void GetTasksAsync(Action<List<Models.Task>> getTasksCallback)
        {
            getTasksCallback(new Data().TaskList);
        }
    }
}
