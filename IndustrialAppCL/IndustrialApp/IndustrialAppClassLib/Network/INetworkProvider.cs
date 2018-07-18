using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using IndustrialApp.Models;

namespace IndustrialApp.Network
{
    public interface INetworkProvider
    {
        void GetTasksAsync(Action<List<Models.Task>> getTasksCallback);
        void GetTaskElementsToTaskAsync(Action<List<TaskElement>> getTaskElementsCallback, int id);
        void GetContainerPartAsync(Action<ContainerPart> getContainerPartsCallback, int v);
        void GetContainerPartAsync(Action<List<ContainerPart>> getContainerPartsCallback, string v);
        void GetTypeAsync(Action<Models.Type> getTypeAsyncCallback, int typeId);
        void GetContainerPartContentAsync(Action<List<ContainerPartContent>> getContainerPartContentCallback, int id);
    }
}
