import { Injectable } from '@angular/core';
import { AppService } from '@app/Services/app.service';
import {AppConfig} from '@app/app.config';
import { Observable } from 'rxjs';
import { HttpClient, HttpHeaders } from '@angular/common/http';
import { ContainerPart } from '@app/models/containerpart';


const httpoption= {
  headers: new HttpHeaders({
    'Content-Type': 'application/json'
})
}

@Injectable({
  providedIn: 'root'
})
export class ContainerPartService extends AppService<ContainerPart>{

  constructor( protected http: HttpClient, private config: AppConfig) {
    super(
      http,
      config.apiUrl,
      config.partEndpoint
    );
  }

  getPartsToContainer(id:number):Observable<ContainerPart[]>{
    return this.http.get<ContainerPart[]>(this.config.apiUrl + this.config.getPartsToContainerEndpoint + id,httpoption )
 }

  postVideo(video:File):Observable<any>{
    return this.http.post<any>(this.config.apiUrl + "taskElement/video" ,httpoption)
  }

}
