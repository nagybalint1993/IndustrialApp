using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using IndustrialApp.Models;
using IndustrialApp.Network.Providers;

namespace IndustrialApp.Network
{
    class NetworkProvider : INetworkProvider
    {
        ContainerPartContentProvider ContainerPartContentProvider;
        ContainerPartProvider ContainerPartProvider;
        TaskElementProvider TaskElementProvider;
        TaskProvider TaskProvider;
        TypeProvider TypeProvider;

        public NetworkProvider()
        {
            ContainerPartContentProvider = new ContainerPartContentProvider();
            ContainerPartProvider = new ContainerPartProvider();
            TaskElementProvider = new TaskElementProvider();
            //TaskProvider = new TaskProvider();
            TypeProvider = new TypeProvider();
        }

        //Get the ContainerParts which belong to the Container with the given UUID
        public void GetContainerPartAsync(Action<List<ContainerPart>> getContainerPartsCallback, string uuid)
        {
            ContainerPartProvider.GetContainerPartAsync(getContainerPartsCallback, uuid);
        }

        public void GetContainerPartAsync(Action<ContainerPart> getContainerPartsCallback, int id)
        {
            ContainerPartProvider.GetContainerPartAsync(getContainerPartsCallback, id);
        }

        public void GetContainerPartContentAsync(Action<List<ContainerPartContent>> getContainerPartContentCallback, int id)
        {
            ContainerPartContentProvider.GetContainerPartContentAsync(getContainerPartContentCallback, id);
        }

        public void GetTaskElementsToTaskAsync(Action<List<TaskElement>> getTaskElementsCallback, int id)
        {
            TaskElementProvider.GetTaskElementsToTaskAsync(getTaskElementsCallback, id);
        }

        public void GetTasksAsync(Action<List<Models.Task>> getTasksCallback)
        {
            //TaskProvider.GetTasksAsync(getTasksCallback);
        }

        public void GetTypeAsync(Action<Models.Type> getTypeAsyncCallback, int typeId)
        {
            TypeProvider.GetTypeAsync(getTypeAsyncCallback, typeId);
        }
    }
}
