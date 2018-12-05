import { Component, OnInit , Input, ViewChild} from '@angular/core';
import { Container } from '@app/models/container';
import {ContainerPart} from '@app/models/containerpart'
import { PartService } from '@app/Services/PartService/part.service';
import {ContainerPartService} from '@app/Services/ContainerPartService/container-part.service'

@Component({
  selector: 'app-add-container-part',
  templateUrl: './add-container-part.component.html',
  styleUrls: ['./add-container-part.component.css']
})
export class AddContainerPartComponent implements OnInit {
  @Input() container:Container;
  @Input() imageTarget:string;
  @Input() imageTargetConcreteWidth;
  @Input() imageTargetConcreteHeight;

  @ViewChild("mycanvas") mycanvas;

  imageUrl: string = "";
  fileToUpload: File = null;

  imageTargetDrag:boolean=true;
  holoDrag=false;

  imageTargetPosX:number;
  imageTargetPosY:number;
  imageTargetHeight:number;
  imageTargetWidth:number;

  currentPartPosX:number;
  currentPartPosY:number;
  currentPartHeight:number;
  currentPartWidth:number;

  constructor(private containerPartService: ContainerPartService) { }

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

  onTargetButtonPressed(){
    console.log("ConcreteWidth:" + this.imageTargetConcreteWidth)
    var it= document.getElementById("imageTarget");
    console.log("OffsetHeight: " + it.offsetHeight);
    console.log("OffsetWidth: " + it.offsetWidth);
    this.imageTargetHeight= it.offsetHeight;
    this.imageTargetWidth= it.offsetHeight;

    var res= it.style.transform.split("(");
    if(res.length>1){
      var val= res[1].split("px");
      var x= parseInt(val[0],10);
      var y= parseInt(val[1].slice(2),10)
      console.log("Transform x: " + x);
      console.log("Transform y: " + y);
      this.imageTargetPosX=x;
      this.imageTargetPosY=y;
    }
    console.log("Transform: " + it.style.transform);

    this.imageTargetDrag= false;
    this.holoDrag=true;

  }

  onAddButtonPressed(name:string){
    var cp= document.getElementById("containerPart");
  
    this.currentPartHeight=cp.offsetHeight;
    this.currentPartWidth= cp.offsetWidth;
    console.log("offsetHeight: " + this.currentPartHeight);
    console.log("offsetWidth: " + this.currentPartWidth);

    var res= cp.style.transform.split("(");
    if(res.length>1){
      var val= res[1].split("px");
      var x= parseInt(val[0],10);
      var y= parseInt(val[1].slice(2),10)
      console.log("Transform x: " + x);
      console.log("Transform y: " + y);
      this.currentPartPosX=x;
      this.currentPartPosY=y;
    }

    this.createContainerPart(name);
  }

  createContainerPart(name:string){
    var partConcreteWidth= this.currentPartWidth/ this.imageTargetWidth * this.imageTargetConcreteWidth/100;
    console.log("Width: " + partConcreteWidth)
    var partConcreteHeight= this.currentPartHeight/ this.imageTargetHeight * this.imageTargetConcreteHeight/100;
    console.log("Height: " + partConcreteHeight)

    var partPosY= ((-1*(this.currentPartPosY - this.imageTargetPosY)*(this.imageTargetConcreteHeight/this.imageTargetHeight))-partConcreteHeight)/100;
    console.log("part eltolás y: " + partPosY);

    var partPosX= (-1*(this.currentPartPosX -this.imageTargetPosX)*(this.imageTargetConcreteWidth/this.imageTargetWidth))/100;
    console.log("part eltolás: x" + partPosX);
    
    var containerPart= new ContainerPart();
    containerPart.containerId= this.container.id;
    containerPart.height=partConcreteHeight;
    containerPart.width=partConcreteHeight;
    containerPart.xCoordinate=partPosX;
    containerPart.yCoordinate=partPosY;
    containerPart.name= name;
    
    //this.containerPartService.post(containerPart);
  }

}
