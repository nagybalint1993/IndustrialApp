import { Component, OnInit } from '@angular/core';
import { ToastrService } from 'ngx-toastr';
import { Container } from '@app/models/container'
import {ContainerService} from '@app/Services/ContainerService/container.service'

@Component({
  selector: 'app-add-container',
  templateUrl: './add-container.component.html',
  styleUrls: ['./add-container.component.css']
})
export class AddContainerComponent implements OnInit {
  currentContainer:Container;
  fileToUpload: File = null;
  imageUrl: string = "";
  containerReady:boolean=false;

  imageTargetWidth:number;
  imageTargetHeight:number;


  constructor(private toastr: ToastrService, private containerservice: ContainerService) { }

  ngOnInit() {
  }

  onAddButtonPressed(pname, pdescription){
    var container:Container=({name:pname, description:pdescription, id:0})

    this.containerservice.post(container).subscribe(c => this.onContainerAdded(c));
    // this.onContainerAdded(container);
  }

  onContainerAdded(container:Container){
    this.toastr.success('Container added')
    this.currentContainer=container;
    this.containerReady=true;
  }

  onPicSelected(file: FileList){
    console.log(event);
    this.fileToUpload = file.item(0);

    //Show image preview
    var reader = new FileReader();
    reader.onload = (event:any) => {
      this.imageUrl = event.target.result;
    }
    reader.readAsDataURL(this.fileToUpload);

    //this.containerservice.postImage(this.fileToUpload).subscribe(() => console.log("image posted"))
  }

}
