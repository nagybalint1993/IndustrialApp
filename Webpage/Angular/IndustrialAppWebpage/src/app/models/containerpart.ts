import { Resource } from "@app/models/resource";

export class ContainerPart extends Resource{
    containerId:number;
    name: string;
    xCoordinate: number;
    yCoordinate: number;
    width: number;
    height: number;
    
}