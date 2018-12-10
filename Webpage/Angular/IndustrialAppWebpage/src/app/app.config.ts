export class AppConfig {
    public readonly apiUrl = 'http://localhost:49184/api/';

    public readonly typesEndpoint = 'types/';

    public readonly containersEndpoint = 'container/'

    public readonly containerContentEndpoint = 'ContainerPartContent/'

    public readonly partEndpoint ='containerpart/'

    public readonly stepEndpoint = 'taskElement/'

    public readonly processEndpoint= 'task/'

    public readonly getPartsToContainerEndpoint='containerpart/ByContainerId/'

    public readonly getContentWithNameToPartEndPoint="containerpartcontent/listWithName/"

    public readonly getStepsToTaskEndpoint="taskElement/getStepsToTask/"
}
