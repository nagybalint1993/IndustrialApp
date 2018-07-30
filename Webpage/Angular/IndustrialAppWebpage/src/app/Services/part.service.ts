import { Injectable } from '@angular/core';
import {Type} from '@app/models/type'
import { HttpClient, HttpHeaders } from '@angular/common/http';
import {AppConfig} from '@app/app.config';
import { Observable, of } from 'rxjs';

const httpoption= {
  headers: new HttpHeaders({
    'Content-Type': 'application/json'
})
}

@Injectable({
  providedIn: 'root',
})
export class PartService {
  serviceUrl:String= "types/";

  constructor( private http: HttpClient, private config: AppConfig) { }

  getTypes() :Observable<Type[]>{
    return this.http.get<Type[]>(this.config.apiUrl + this.serviceUrl, httpoption);
  }

  putType(type:Type): Observable<any>{
    console.log("putType:" + type.name + type.id);
    console.log("URL:" + this.config.apiUrl + this.serviceUrl+ type.id );
    return this.http.put(this.config.apiUrl + this.serviceUrl+ type.id , type, httpoption );
  }

  deleteType(id:Number){
    return this.http.delete(this.config.apiUrl + this.serviceUrl+ id , httpoption);
  }

  postType(type:Type): Observable<any>{
    return this.http.post(this.config.apiUrl + this.serviceUrl, type, httpoption);
  }
}
