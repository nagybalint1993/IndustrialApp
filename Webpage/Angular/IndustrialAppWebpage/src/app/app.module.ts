import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import {NgbModule} from '@ng-bootstrap/ng-bootstrap';
import { FormsModule } from '@angular/forms';
import {HttpClientModule} from '@angular/common/http';
import {  BrowserAnimationsModule } from '@angular/platform-browser/animations';
import { ToastrModule } from 'ngx-toastr';

import { AppComponent } from '@app/app.component';
import { NavbarComponent } from '@app/navbar/navbar.component';
import { AddPartComponent } from '@app/Part/add-part/add-part.component';
import { AppRoutingModule } from '@app/app-routing/app-routing.module';
import { EditPartComponent } from '@app/Part/edit-part/edit-part.component';
import { AppConfig } from '@app/app.config';
import { AddContainerComponent } from '@app/Container/add-container/add-container.component';
import { EditContainerComponent } from '@app/Container/edit-container/edit-container.component';
import { AddContainerPartComponent } from '@app/ContainerPart/add-container-part/add-container-part.component';
import { provideForRootGuard } from '../../node_modules/@angular/router/src/router_module';

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
