import { Resource } from "@app/models/resource";

export class Container extends Resource{
    name:string;
    description:string;
    imageId:number;
}