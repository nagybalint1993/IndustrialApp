import { Component, OnInit } from '@angular/core';
import{Type} from '@app/models/type';
import { PartService } from '@app/Services/part.service';
import { ToastrService } from 'ngx-toastr';

@Component({
  selector: 'app-edit-part',
  templateUrl: './edit-part.component.html',
  styleUrls: ['./edit-part.component.css']
})
export class EditPartComponent implements OnInit {
  actualType: Type;

  types: Type[];

  constructor(private partservice: PartService,private toastr: ToastrService) {

    this.actualType={id:1,name:"", description:""}
   }

  ngOnInit() {
    this.updateTable();
  }

  updateTable(){
    this.partservice.getAll().subscribe(types => this.types= types);
  }

  OnSelect(type){
    this.actualType={...type};
  }

  onEditButtonPressed(name, description){
    if(!name){
      this.toastr.error("Name field can't be empty")
    }
    this.partservice.put(this.actualType).subscribe(() => this.updateTable());
  }

  onDeleteButtonPressed(name, description){
    this.partservice.delete(this.actualType.id).subscribe(()=> this.updateTable());
    //this.updateTable();
  }
}
