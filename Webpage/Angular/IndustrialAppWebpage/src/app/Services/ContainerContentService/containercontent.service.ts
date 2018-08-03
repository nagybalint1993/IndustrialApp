import { Injectable } from '@angular/core';
import { AppService } from '@app/Services/app.service';
import { ContainerContent } from '@app/models/containerContent';
import { HttpClient, HttpHeaders } from '@angular/common/http';
import { AppConfig } from '@app/app.config';
@Injectable({
  providedIn: 'root'
})
export class ContainercontentService extends AppService<ContainerContent> {

  constructor(protected http:HttpClient, private config:AppConfig) { 
    super(http,config.apiUrl,config.containerContentEndpoint)
  }

}
