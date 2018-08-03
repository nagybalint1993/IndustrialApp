import { Injectable } from '@angular/core';
import { AppService } from '@app/Services/app.service';
import {AppConfig} from '@app/app.config';
import { Observable } from 'rxjs';
import { HttpClient, HttpHeaders } from '@angular/common/http';
import { ContainerPart } from '@app/models/containerpart';

@Injectable({
  providedIn: 'root'
})
export class ContainerPartService extends AppService<ContainerPart>{

  constructor( protected http: HttpClient, private config: AppConfig) {
    super(
      http,
      config.apiUrl,
      config.typesEndpoint
    );
  }

  getPartsToContainer(id:number):Observable<ContainerPart[]>{
    return this.http.get<ContainerPart[]>(this.config.apiUrl + this.config.getPartsToContainerEndpoint)
 }

}
