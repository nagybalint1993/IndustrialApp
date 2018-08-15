import { Resource } from "@app/models/resource";

export class StepWithName extends Resource{
    name: string;
    description: string;
    order:number;
    taskId:number;
    typeId:number;
    typeName:string;
}