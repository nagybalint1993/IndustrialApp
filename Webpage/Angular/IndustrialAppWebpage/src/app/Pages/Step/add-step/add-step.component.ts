import { Component, OnInit ,Input, OnChanges } from '@angular/core';
import { Process } from '@app/models/process';
import { StepService } from '@app/Services/StepService/step.service';
import { StepWithName } from '@app/models/stepWithNames';
import { ToastrService } from '../../../../../node_modules/ngx-toastr';
import { PartService } from '@app/Services/PartService/part.service';
import { Type } from '@app/models/type';
import { Step } from '@app/models/step';

@Component({
  selector: 'app-add-step',
  templateUrl: './add-step.component.html',
  styleUrls: ['./add-step.component.css']
})
export class AddStepComponent implements OnInit, OnChanges {
  @Input() process:Process

  steps:StepWithName[];
  name:string;
  description:string;
  types:Type[];
  order:number;
  currentTypeID:number;

  enableTable=false;


  constructor(private stepService: StepService, private toastr: ToastrService,private typeService:PartService) { }

  ngOnInit() {
    this.typeService.getAll().subscribe(t=> this.types= t);
  }

  ngOnChanges(){
    console.log("ID: "+this.process.id + " Name: " + this.process.name + " Desc: " + this.process.description)
    this.getSteps();
  }

  getSteps(){
    this.stepService.getStepsToTask(this.process.id).subscribe(s => this.onStepChange(s));
  }

  onStepChange(steps){
    this.steps=steps;
    if(this.steps.length ==0){
      this.enableTable=false;
    }
    else{
      this.enableTable=true;
    }
  }

  onAddButtonPressed(){
    console.log("Type" + this.currentTypeID)
    console.log("Name:" + this.name)
    console.log("Desc:" + this.description)
    console.log("Order:" + this.order)
    var step= new Step();
    step.name=this.name
    step.order=this.order
    step.description=this.description;
    step.typeId= this.currentTypeID;
    step.taskId= this.process.id;

    this.stepService.post(step).subscribe(()=> this.onStepAdded());
  }

  onStepAdded(){
    this.toastr.success("Step added")
    this.name=""
    this.order=0
    this.description=""
    this.currentTypeID=null;
    this.getSteps();
  }

  onTypeSelect(event){
    this.currentTypeID= event.target.value;
    console.log("Type selected:" + this.currentTypeID)
  }

}
