import { Component, OnInit } from '@angular/core';
import { ContainerService } from '@app/Services/ContainerService/container.service';
import { ToastrService } from '../../../../node_modules/ngx-toastr';
import { Container } from '@app/models/container';

@Component({
  selector: 'app-edit-container',
  templateUrl: './edit-container.component.html',
  styleUrls: ['./edit-container.component.css']
})
export class EditContainerComponent implements OnInit {

  containers:Container[]

  currentContainer: Container;
  currentContainerId:number;
  name:string;
  description:string
  containerSelected:boolean=false;

  constructor(private containerService: ContainerService, private toastService:ToastrService) { }

  ngOnInit() {
    this.getAllContainer()
  }

  getAllContainer(){
    this.containerService.getAll().subscribe(c => this.containers= c);
  }

  onContainerSelect(event){
    this.currentContainerId= event.target.value;
    this.currentContainer= this.containers.filter(c => c.id= this.currentContainerId)[0];
    this.name= this.currentContainer.name;
    this.description= this.currentContainer.description;
    this.containerSelected=true;
  }
}
