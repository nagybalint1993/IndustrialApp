import { Resource } from "@app/models/resource";

export class ContentWithName extends Resource{
    typeName:string;
    typeId:number;
    containerPartId:number;
    amount:number;
}