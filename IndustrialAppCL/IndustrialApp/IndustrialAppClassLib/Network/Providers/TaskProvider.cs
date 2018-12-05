using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using IndustrialApp.Models;
using IndustrialApp.TestData;

namespace IndustrialApp.Network.Providers
{
    public class TaskProvider : AppProvider<Task>
    {
        public TaskProvider(string endpoint):base(endpoint)
        {
            
        }
    }
}
