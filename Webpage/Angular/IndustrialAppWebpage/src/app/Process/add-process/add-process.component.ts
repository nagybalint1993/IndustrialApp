import { Component, OnInit } from '@angular/core';
import { Process } from '@app/models/process';
import { ProcessService } from '@app/Services/ProcessService/process.service';

@Component({
  selector: 'app-add-process',
  templateUrl: './add-process.component.html',
  styleUrls: ['./add-process.component.css']
})
export class AddProcessComponent implements OnInit {

  process:Process;
  processFilled:boolean=false;

  constructor(private processService: ProcessService) { }

  ngOnInit() {
  }

  onProcessAddButtonPressed(pName, pDescription){
    var process= new Process;
    process.name=pName;
    process.description= pDescription;

    this.processService.post(process).subscribe( p => this.onProcessAdded(p));
  }

  onProcessAdded(p:Process){
    console.log("OnProcessAdded ----")
    console.log("id: " + p.id )
    console.log("Name: " + p.name)
    console.log("Description: "+ p.description)
    console.log("----------------------------")
    this.process= p;
    this.processFilled= true;
  }

}
