using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using IndustrialApp.Models;
using IndustrialApp.TestData;

namespace IndustrialApp.Network.Providers
{
    class ContainerPartProvider
    {
        internal void GetContainerPartAsync(Action<List<ContainerPart>> getContainerPartsCallback, string uuid)
        {
            getContainerPartsCallback(new Data().ContainerPartList);
        }

        internal void GetContainerPartAsync(Action<ContainerPart> getContainerPartsCallback, int id)
        {
            var containerpart = new TestData.Data().ContainerPartList.Where(cp => cp.Id == id).FirstOrDefault();
            getContainerPartsCallback(containerpart);
        }
    }
}
