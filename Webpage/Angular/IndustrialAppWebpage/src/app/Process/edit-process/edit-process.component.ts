import { Component, OnInit } from '@angular/core';
import { Process } from '@app/models/process';
import { ProcessService } from '@app/Services/ProcessService/process.service';
import { ToastrService } from '../../../../node_modules/ngx-toastr';

@Component({
  selector: 'app-edit-process',
  templateUrl: './edit-process.component.html',
  styleUrls: ['./edit-process.component.css']
})
export class EditProcessComponent implements OnInit {
  processes:Process[];
  currentProcessId:number;
  currentProcess:Process;
  name:string;
  description:string
  processSelected:boolean=false;
  editStepSelected:boolean=false;

  constructor(private processService: ProcessService, private toastr: ToastrService) { }

  ngOnInit(){
    this.getAllProcess()
  }

  getAllProcess(){
    this.processService.getAll().subscribe(p=> this.processes=p)
  }

  onProcessSelect(event){
    this.currentProcessId= event.target.value
    console.log(this.currentProcessId)
    this.currentProcess= this.processes.filter(p=> p.id== this.currentProcessId)[0];
    this.name= this.currentProcess.name
    this.description= this.currentProcess.description
    this.processSelected=true;
  }

  onSaveButtonPressed(pName,pDescription){
    console.log(this.currentProcessId)
    this.currentProcess.description=pName;
    this.currentProcess.name=pName
    this.processService.put(this.currentProcess).subscribe(()=>this.toastr.success("Process updated"))
  }

  onDeleteButtonPressed(){
    this.processService.delete(this.currentProcessId).subscribe(()=> this.getAllProcess())
    this.name=""
    this.description=""
  }

  onEditStepsButtonPressed(){
    this.editStepSelected=true;
  }
  

  onBackButtonPressed(){
    
    this.editStepSelected=false;
  }

}
