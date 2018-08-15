import { Injectable } from '@angular/core';
import { AppService } from '@app/Services/app.service';
import { Step } from '@app/models/step';
import { HttpClient } from '../../../../node_modules/@angular/common/http';
import { AppConfig } from '@app/app.config';
import { Observable } from '../../../../node_modules/rxjs';
import { StepWithName } from '@app/models/stepWithNames';

@Injectable({
  providedIn: 'root'
})
export class StepService extends AppService<Step>{

  constructor(  http: HttpClient, private config: AppConfig) {
    super(
      http,
      config.apiUrl,
      config.stepEndpoint
    );
  }

  getStepsToTask(id:number):Observable<StepWithName[]>{
    return this.http.get<StepWithName[]>(this.config.apiUrl + this.config.getStepsToTaskEndpoint + id );
  }

}
