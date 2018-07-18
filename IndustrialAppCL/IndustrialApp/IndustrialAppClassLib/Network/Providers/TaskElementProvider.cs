using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using IndustrialApp.Models;

namespace IndustrialApp.Network.Providers
{
    class TaskElementProvider
    {
        internal void GetTaskElementsToTaskAsync(Action<List<TaskElement>> getTaskElementsCallback, int id)
        {
            getTaskElementsCallback(new TestData.Data().TaskElementList.Where(te => te.TaskId == id).ToList());
        }
    }
}
