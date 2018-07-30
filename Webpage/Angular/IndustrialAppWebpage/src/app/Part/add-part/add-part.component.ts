import { Component, OnInit } from '@angular/core';
import { PartService} from '@app/Services/part.service'
import {Type} from '@app/models/type'
import { ToastrService } from 'ngx-toastr';

@Component({
  selector: 'app-add-part',
  templateUrl: './add-part.component.html',
  styleUrls: ['./add-part.component.css']
})
export class AddPartComponent implements OnInit {
  name: String;
  description:String;
  label:String;

  type: Type;
  types: Type[];

  constructor(private partservice: PartService,private toastr: ToastrService) { 
    console.log("constructor");
  }

  ngOnInit() {
    this.updateTable();
  }

  onAddButtonPressed(pname, pdescription){
      if(!pname){
        this.toastr.error("Please fill the name field");
        return
      }
      this.type = ( {name:pname, description:pdescription, id:0})
      this.partservice.post(this.type).subscribe(()=> this.onTypeAdded());
      console.log("button pressed");
  }

  onTypeAdded(){
    this.toastr.success("Part added");
    this.updateTable();
    this.clearTextInputs();
  }

  clearTextInputs(){
    this.name="";
    this.description="";
  }

  updateTable(){
    this.partservice.getAll().subscribe(types => this.types= types);
    
  }

}
