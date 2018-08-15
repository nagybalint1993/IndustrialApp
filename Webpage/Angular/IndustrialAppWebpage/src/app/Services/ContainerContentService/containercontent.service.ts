import { Injectable } from '@angular/core';
import { AppService } from '@app/Services/app.service';
import { ContainerContent } from '@app/models/containerContent';
import { HttpClient, HttpHeaders } from '@angular/common/http';
import { AppConfig } from '@app/app.config';
import { Observable, config } from '../../../../node_modules/rxjs';
import { ContentWithName } from '@app/models/contentWithName';

const httpoption= {
  headers: new HttpHeaders({
    'Content-Type': 'application/json'
})
}


@Injectable({
  providedIn: 'root'
})
export class ContainercontentService extends AppService<ContainerContent> {

  constructor(protected http:HttpClient, private config:AppConfig) { 
    super(http,config.apiUrl,config.containerContentEndpoint)
  }

  getContentWithNameToPart(id: number):Observable<ContentWithName[]>{
    return this.http.get<ContentWithName[]>(this.config.apiUrl + this.config.getContentWithNameToPartEndPoint + id,httpoption);
  }

}
