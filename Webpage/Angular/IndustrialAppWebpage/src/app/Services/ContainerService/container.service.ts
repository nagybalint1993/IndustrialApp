import { Injectable } from '@angular/core';
import { AppService } from '@app/Services/app.service';
import { Container } from '@app/models/container';
import { HttpClient, HttpHeaders } from '@angular/common/http';
import {AppConfig} from '@app/app.config';
import { Observable } from 'rxjs';

@Injectable({
  providedIn: 'root'
})
export class ContainerService extends AppService<Container>{

  constructor(http:HttpClient , private config: AppConfig) {
    super(
      http,
      config.apiUrl,
      config.containersEndpoint
    )
  }

  postImage(image):Observable<any>{
    const formData: FormData = new FormData();
    formData.append('Image',image);
    return this.http.post(this.config.apiUrl+ "image/", formData);
  }
}
