import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import {NgbModule} from '@ng-bootstrap/ng-bootstrap';
import { FormsModule } from '@angular/forms';
import {HttpClientModule} from '@angular/common/http';
import {  BrowserAnimationsModule } from '@angular/platform-browser/animations';
import { ToastrModule } from 'ngx-toastr';

import { AppComponent } from './app.component';
import { NavbarComponent } from './navbar/navbar.component';
import { AddPartComponent } from './Part/add-part/add-part.component';
import { AppRoutingModule } from './app-routing/app-routing.module';
import { EditPartComponent } from './Part/edit-part/edit-part.component';
import { AppConfig } from './app.config';
import { AddContainerComponent } from './Container/add-container/add-container.component';
import { EditContainerComponent } from './Container/edit-container/edit-container.component';
import { AddContainerPartComponent } from './ContainerPart/add-container-part/add-container-part.component';

@NgModule({
  declarations: [
    AppComponent,
    NavbarComponent,
    AddPartComponent,
    EditPartComponent,
    AddContainerComponent,
    EditContainerComponent,
    AddContainerPartComponent
  ],
  imports: [
    BrowserModule,
    NgbModule.forRoot(),
    AppRoutingModule,
    FormsModule,
    HttpClientModule,
    ToastrModule.forRoot(),
    BrowserAnimationsModule
  ],
  providers: [
    AppConfig,
  ],
  bootstrap: [AppComponent]
})
export class AppModule { }
