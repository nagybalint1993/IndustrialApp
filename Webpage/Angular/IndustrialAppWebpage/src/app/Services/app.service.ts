import { Injectable } from '@angular/core';
import { HttpClient, HttpHeaders } from '@angular/common/http';
import { Observable, of } from 'rxjs';
import { Resource } from '@app/models/resource';

const httpoption= {
  headers: new HttpHeaders({
    'Content-Type': 'application/json'
})
}

@Injectable({
  providedIn: 'root'
})
export class AppService<T extends Resource> {
  baseURL:string;
  serviceURL:string;

  constructor( private http: HttpClient) { }

  getAll() :Observable<T[]>{
    return this.http.get<T[]>(this.baseURL + this.serviceURL, httpoption);
  }

  put(data:T): Observable<any>{
    console.log("put:" + data.id);
    console.log("URL:" + this.baseURL + this.serviceURL+ data.id );
    return this.http.put(this.baseURL + this.serviceURL+ data.id , data, httpoption );
  }

  delete(id:Number){
    return this.http.delete(this.baseURL + this.serviceURL+ id , httpoption);
  }

  post(data:T): Observable<any>{
    return this.http.post(this.baseURL + this.serviceURL, data, httpoption);
  }
}
