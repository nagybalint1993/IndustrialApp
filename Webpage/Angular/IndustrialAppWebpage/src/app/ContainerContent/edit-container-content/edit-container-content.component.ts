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

@Component({
  selector: 'app-edit-container-content',
  templateUrl: './edit-container-content.component.html',
  styleUrls: ['./edit-container-content.component.css']
})
export class EditContainerContentComponent implements OnInit {
  containers:Container[]
  currentContainerPartID:number;
  parts: ContainerPart[]

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
  }

}
