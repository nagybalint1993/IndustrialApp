using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using IndustrialApp.Models;

namespace IndustrialApp.Network.Providers
{
    class ContainerPartContentProvider
    {
        internal void GetContainerPartContentAsync(Action<List<ContainerPartContent>> getContainerPartContentCallback, int id)
        {
            var cpContent = new TestData.Data().ContainerPartContentList.Where(cp => cp.TypeId == id).ToList();
            getContainerPartContentCallback(cpContent);
        }
    }
}
