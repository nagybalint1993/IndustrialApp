import { Component, OnInit , Input, ViewChild} from '@angular/core';
import { Container } from '@app/models/container';

@Component({
  selector: 'app-add-container-part',
  templateUrl: './add-container-part.component.html',
  styleUrls: ['./add-container-part.component.css']
})
export class AddContainerPartComponent implements OnInit {
  @Input() container:Container;
  @Input() imageTarget:string;

  @ViewChild("mycanvas") mycanvas;

  imageUrl: string = "";
  fileToUpload: File = null;

  constructor() { }

  ngOnInit() {
  }

  onPicSelected(file: FileList){
    console.log(event);
    this.fileToUpload = file.item(0);
    let canvas= this.mycanvas.nativeElement;
    let context= canvas.getContext('2d');
    context.clearRect(0,0,100,100);

    //Show image preview
    var reader = new FileReader();
    reader.onload = (event:any) => {
      this.imageUrl = event.target.result;
      var img= new Image();
      img.onload= function(){
        var hRatio = canvas.width / img.width    ;
        var vRatio = canvas.height / img.height  ;
        var ratio  = Math.min ( hRatio, vRatio );
        canvas.width= img.width*ratio;
        canvas.height = img.height*ratio;
        context.drawImage(img, 0,0, img.width, img.height, 0,0,canvas.width, canvas.height);
      }
      img.src=this.imageUrl;
    }
    reader.readAsDataURL(this.fileToUpload);

    //this.containerservice.postImage(this.fileToUpload).subscribe(() => console.log("image posted"))
  }

}
