import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import {NgbModule} from '@ng-bootstrap/ng-bootstrap';
import { FormsModule } from '@angular/forms';
import {HttpClientModule} from '@angular/common/http';
import {  BrowserAnimationsModule } from '@angular/platform-browser/animations';
import { ToastrModule } from 'ngx-toastr';
import { AngularDraggableModule } from 'angular2-draggable';
import { FileSelectDirective } from 'ng2-file-upload';

import { AppComponent } from '@app/app.component';
import { NavbarComponent } from '@app/navbar/navbar.component';
import { AddPartComponent } from '@app/Part/add-part/add-part.component';
import { AppRoutingModule } from '@app/app-routing/app-routing.module';
import { EditPartComponent } from '@app/Part/edit-part/edit-part.component';
import { AppConfig } from '@app/app.config';
import { AddContainerComponent } from '@app/Container/add-container/add-container.component';
import { EditContainerComponent } from '@app/Container/edit-container/edit-container.component';
import { AddContainerPartComponent } from '@app/ContainerPart/add-container-part/add-container-part.component';
import { provideForRootGuard } from '@angular/router/src/router_module';
import { PartService } from '@app/Services/PartService/part.service';
import { ContainerService } from '@app/Services/ContainerService/container.service';
import { AddContainerContentComponent } from '@app/ContainerContent/add-container-content/add-container-content.component';
import { EditContainerContentComponent } from '@app/ContainerContent/edit-container-content/edit-container-content.component';
import { AddProcessComponent } from '@app/Process/add-process/add-process.component';
import { EditProcessComponent } from '@app/Process/edit-process/edit-process.component';
import { ContainercontentService } from '@app/Services/ContainerContentService/containercontent.service';
import { ContainerPartService } from '@app/Services/ContainerPartService/container-part.service';
import { AddStepComponent } from './Pages/Step/add-step/add-step.component';
import { EditStepComponent } from './Pages/Step/edit-step/edit-step.component';
import { StepService } from '@app/Services/StepService/step.service';
import { ProcessService } from '@app/Services/ProcessService/process.service';
import { AddUserComponent } from './Pages/User/add-user/add-user.component';
import { EditUserComponent } from './Pages/User/edit-user/edit-user.component';
import { QRCodeModule } from 'angularx-qrcode';
import {UploadVideoComponent } from './Pages/Video/upload-video/upload-video.component';

@NgModule({
  declarations: [
    AppComponent,
    NavbarComponent,
    AddPartComponent,
    EditPartComponent,
    AddContainerComponent,
    EditContainerComponent,
    AddContainerPartComponent,
    AddContainerContentComponent,
    EditContainerContentComponent,
    AddProcessComponent,
    EditProcessComponent,
    AddStepComponent,
    EditStepComponent,
    AddUserComponent,
    EditUserComponent,
    UploadVideoComponent,
    FileSelectDirective
  ],
  imports: [
    BrowserModule,
    NgbModule.forRoot(),
    AppRoutingModule,
    FormsModule,
    HttpClientModule,
    ToastrModule.forRoot(),
    BrowserAnimationsModule,
    AngularDraggableModule,
    QRCodeModule
  ],
  providers: [
    AppConfig,
    PartService,
    ContainerService,
    ContainercontentService,
    ContainerPartService,
    StepService,
    ProcessService
  ],
  bootstrap: [AppComponent]
})
export class AppModule { }
