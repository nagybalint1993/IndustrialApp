import { Resource } from "@app/models/resource";

export class Step extends Resource{
    name: string;
    description: string;
    order:number;
    taskId:number;
    typeId:number;
}