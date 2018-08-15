import { Component, OnInit } from '@angular/core';
import { ContainerService } from '@app/Services/ContainerService/container.service';
import { PartService } from '@app/Services/PartService/part.service';
import { ContainercontentService } from '@app/Services/ContainerContentService/containercontent.service';
import { Container } from '@app/models/container';
import {ContainerPart} from '@app/models/containerpart'
import { ContainerPartService } from '@app/Services/ContainerPartService/container-part.service';
import { Type } from '@app/models/type';
import { ContainerContent } from '@app/models/containerContent';
import { ToastrService } from '../../../../node_modules/ngx-toastr';
import { ContentWithName } from '@app/models/contentWithName';

@Component({
  selector: 'app-edit-container-content',
  templateUrl: './edit-container-content.component.html',
  styleUrls: ['./edit-container-content.component.css']
})
export class EditContainerContentComponent implements OnInit {
  containers:Container[];
  currentContainerPartID:number;
  currentTypeId:number;
  parts: ContainerPart[];
  contents:ContentWithName[];
  types:Type[]

  editable:boolean=false;
  amount:number;

  currentContentId:number;
  currentContainerContent:ContainerContent;

  constructor( private containerService:ContainerService,private containerPartService:ContainerPartService,
    private containerContentService:ContainercontentService, private typeService:PartService,private toastr: ToastrService)  { }

  ngOnInit() {
    this.containerService.getAll().subscribe(c => this.containers=c)
  }

  onContainerSelect(event){
    var id=event.target.value
    console.log("Container selected! ID: " +id)
    this.containerPartService.getPartsToContainer(id).subscribe(p=> this.parts=p )
  }

  onDrawerSelect(event){
    this.currentContainerPartID= event.target.value
    console.log("Drawer select: " + this.currentContainerPartID)
    this.containerContentService.getContentWithNameToPart(this.currentContainerPartID).subscribe(c => this.contents= c);
    
  }

  onSelect(id, typeid, typename, amount, partId){
    this.typeService.getAll().subscribe(t=> this.types= t);
    this.currentTypeId=typeid;
    
    console.log("OnSelect, TypeId:"+ this.currentTypeId)
    console.log("id: "+ id);
    console.log("Amount: "+ amount);
    console.log("ContainerPArtId: " + partId);
    console.log();
    this.currentContainerContent= new ContainerContent();
    this.currentContainerContent.id=id
    this.currentContainerContent.amount=amount
    this.currentContainerContent.containerPartId=partId;
    this.amount=amount;

    this.editable=true;
  }
}
