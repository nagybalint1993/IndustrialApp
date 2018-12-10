using IndustrialApp.Models;
using IndustrialApp.Network.Providers;
using IndustrialApp.Presenter;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Net.Http;

namespace HelperProject
{
    class Program
    {
        static void Main(string[] args)
        {
            new Test().getContainers();

            Console.ReadLine();
        }


    }

    public class Test
    {
        public async void getContainers()
        {
            AppProvider<Container> appProvider = new AppProvider<Container>("container");

            List<Container> list = await appProvider.GetListAsync(printContainers);
            printContainers(list);
        }

        public void printContainers(List<Container> list)
        {
            foreach (Container c in list)
            {
                Console.WriteLine(c.Name);
            }
        }
    }
}
