import { Resource } from "@app/models/resource";

export class ContainerPart extends Resource{
    ContainerId:number;
    Name: string;
    XCoordinate: number;
    YCoordinate: number;
    Width: number;
    Height: number;
    
}