import { Component, OnInit } from '@angular/core';
import { ContainerService } from '@app/Services/ContainerService/container.service';
import { PartService } from '@app/Services/PartService/part.service';
import { ContainercontentService } from '@app/Services/ContainerContentService/containercontent.service';
import { Container } from '@app/models/container';
import {ContainerPart} from '@app/models/containerpart'
import { ContainerPartService } from '@app/Services/ContainerPartService/container-part.service';
import { Type } from '@app/models/type';
import { ContainerContent } from '@app/models/containerContent';

@Component({
  selector: 'app-add-container-content',
  templateUrl: './add-container-content.component.html',
  styleUrls: ['./add-container-content.component.css']
})
export class AddContainerContentComponent implements OnInit {
  containers:Container[]

  parts: ContainerPart[]

  types:Type[]

  currentTypeID:number;
  amount:number;
  currentContainerPartID:number;

  constructor( private containerService:ContainerService,private containerPartService:ContainerPartService,
     private containerContentService:ContainercontentService, private typeService:PartService) 
    {

    }

  ngOnInit() {
    this.containerService.getAll().subscribe(c => this.containers=c)
    this.typeService.getAll().subscribe(t=> this.types= t);
  }

  onContainerSelect(event){
    var id=event.target.value
    console.log("Container selected! ID: " +id)
    this.containerPartService.getPartsToContainer(id).subscribe(p=> this.parts=p )
  }

  onDrawerSelect(event){
    this.currentContainerPartID= event.target.value
    console.log("Drawer select: " + this.currentContainerPartID)
  }

  onTypeSelect(event){
    this.currentTypeID= event.target.value;
    console.log("Type selected:" + this.currentTypeID)
  }

  onAddButtonPressed(){
    var content= new ContainerContent();
    content.Amount= this.amount;
    content.ContainerPartId= this.currentContainerPartID;
    content.TypeId= this.currentTypeID;
    console.log("Add");
    this.containerContentService.post(content).subscribe(()=> this.onContentAdded())
  }

  onContentAdded(){
    this.amount=0;
    this.currentContainerPartID=null;
    this.currentTypeID=null;
  }
}
