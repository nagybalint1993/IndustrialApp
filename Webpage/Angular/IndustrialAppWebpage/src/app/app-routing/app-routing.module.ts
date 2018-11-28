import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import {AddPartComponent} from '@app/Part/add-part/add-part.component'
import {EditPartComponent} from '@app/Part/edit-part/edit-part.component'
import {AddContainerComponent} from '@app/Container/add-container/add-container.component'
import {EditContainerComponent} from '@app/Container/edit-container/edit-container.component'
import {AddContainerContentComponent} from '@app/ContainerContent/add-container-content/add-container-content.component'
import {EditContainerContentComponent} from '@app/ContainerContent/edit-container-content/edit-container-content.component'
import {AddProcessComponent} from '@app/Process/add-process/add-process.component'
import {EditProcessComponent} from '@app/Process/edit-process/edit-process.component'
import {AddUserComponent} from '@app/Pages/User/add-user/add-user.component'
import {EditUserComponent} from '@app/Pages/User/edit-user/edit-user.component'
import{AddStepComponent} from '@app/Pages/Step/add-step/add-step.component'

const routes: Routes = [
  { path: 'AddPart', component: AddPartComponent },
  { path: 'EditPart', component: EditPartComponent },
  { path: 'AddContainer', component: AddContainerComponent},
  {path: 'EditContainer', component: EditContainerComponent},
  {path: 'AddContainerContent', component: AddContainerContentComponent},
  {path: 'EditContainerContent', component: EditContainerContentComponent},
  {path: 'AddProcess', component: AddProcessComponent},
  {path: 'EditProcess', component: EditProcessComponent},
  {path: 'AddStep', component: AddStepComponent},
  {path: 'AddUser', component: AddUserComponent},
  {path: 'EditUser', component: EditUserComponent}
];

@NgModule({
  imports: [ RouterModule.forRoot(routes) ],
  exports: [ RouterModule ]
})
export class AppRoutingModule {}