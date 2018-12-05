import { Component, OnInit } from '@angular/core';
import { ContainerPartService } from '@app/Services/ContainerPartService/container-part.service';
import {  FileUploader, FileSelectDirective } from 'ng2-file-upload/ng2-file-upload';
import { AppConfig } from '@app/app.config';

@Component({
  selector: 'app-upload-video',
  templateUrl: './upload-video.component.html',
  styleUrls: ['./upload-video.component.css']
})
export class UploadVideoComponent implements OnInit {
  fileToUpload: File = null;
  imageUrl: string = "";

  uploader:FileUploader= new FileUploader({url:this.config.apiUrl + "taskElement/video"})

  constructor(private containerpartservice: ContainerPartService, private config: AppConfig) { }

  ngOnInit() {
    this.uploader.onAfterAddingFile = (file) => { file.withCredentials = false; };
    this.uploader.onCompleteItem = (item: any, response: any, status: any, headers: any) => {
      console.log('ImageUpload:uploaded:', item, status, response);
      alert('File uploaded successfully');
  };
  }

  onPicSelected(file: FileList){
    console.log(event);
    this.fileToUpload = file.item(0);

    console.log(this.fileToUpload.name)

    //Show image preview
    var reader = new FileReader();
    reader.onload = (event:any) => {
      this.imageUrl = event.target.result;
    }
    reader.readAsDataURL(this.fileToUpload);

    this.containerpartservice.postVideo(this.fileToUpload).subscribe(response => console.log(response))
    //this.containerservice.postImage(this.fileToUpload).subscribe(() => console.log("image posted"))
  }

}
