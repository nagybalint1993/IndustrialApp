import { Component, OnInit ,Input} from '@angular/core';
import { Process } from '@app/models/process';
import { StepWithName } from '@app/models/stepWithNames';
import { Type } from '@app/models/type';
import { StepService } from '@app/Services/StepService/step.service';
import { ToastrService } from '../../../../../node_modules/ngx-toastr';
import { PartService } from '@app/Services/PartService/part.service';
import { Step } from '@app/models/step';

@Component({
  selector: 'app-edit-step',
  templateUrl: './edit-step.component.html',
  styleUrls: ['./edit-step.component.css']
})
export class EditStepComponent implements OnInit {
  @Input() process:Process

  steps:StepWithName[];
  name:string;
  description:string;
  types:Type[];
  order:number;
  currentTypeID:number;
  currentStep:Step;

  enableTable=false;


  constructor(private stepService: StepService, private toastr: ToastrService,private typeService:PartService) { }

  ngOnInit() {
    this.typeService.getAll().subscribe(t=> this.types= t);
    this.currentStep= new Step;
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

  onStepSelected(step){
    this.name= step.name;
    this.description= step.description;
    this.order= step.order;
    this.currentTypeID= step.typeId;

    this.currentStep.id=step.id
    this.currentStep.taskId=step.taskId
  }

  onSaveStepButtonPressed(){
    console.log("Type" + this.currentTypeID)
    console.log("Name:" + this.name)
    console.log("Desc:" + this.description)
    console.log("Order:" + this.order)

    this.currentStep.name=this.name
    this.currentStep.order=this.order
    this.currentStep.description=this.description;
    this.currentStep.typeId= this.currentTypeID;

    this.stepService.put(this.currentStep).subscribe(()=> this.onStepUpdated());
  }

  onStepUpdated(){
    this.toastr.success("Step updated")
    this.name=""
    this.order=0
    this.description=""
    this.currentTypeID=null;
    this.getSteps();
  }

  onDeleteStepButtonPressed(){
    this.stepService.delete(this.currentStep.id).subscribe(() => this.onStepDeleted())
  }

  onStepDeleted(){
    this.toastr.show("Step deleted")
    this.currentStep.id=null;
    this.getSteps()
  }

  onTypeSelect(event){
    this.currentTypeID= event.target.value;
    console.log("Type selected:" + this.currentTypeID)
  }

  onAddNewStepButtonPressed(){
    
  }

}
