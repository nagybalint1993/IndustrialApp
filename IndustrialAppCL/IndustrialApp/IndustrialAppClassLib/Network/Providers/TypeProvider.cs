using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using IndustrialApp.Models;

namespace IndustrialApp.Network.Providers
{
    class TypeProvider
    {
        internal void GetTypeAsync(Action<Models.Type> getTypeAsyncCallback, int typeId)
        {
            getTypeAsyncCallback(new TestData.Data().TypeList.Where(t => t.Id == typeId).FirstOrDefault());
        }
    }
}
