import { Injectable } from '@angular/core';
import { AppService } from '@app/Services/app.service';
import { Process } from '@app/models/process';
import { HttpClient } from '../../../../node_modules/@angular/common/http';
import { AppConfig } from '@app/app.config';

@Injectable({
  providedIn: 'root'
})
export class ProcessService extends AppService<Process>{

  constructor(  http: HttpClient, private config: AppConfig) {
    super(
      http,
      config.apiUrl,
      config.processEndpoint
    );
  }
}
