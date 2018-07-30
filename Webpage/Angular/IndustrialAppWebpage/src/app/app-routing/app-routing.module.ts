import { NgModule }             from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import {AddPartComponent} from '../Part/add-part/add-part.component'
import {EditPartComponent} from '../Part/edit-part/edit-part.component'
import {AddContainerComponent} from '../Container/add-container/add-container.component'
import {EditContainerComponent} from '../Container/edit-container/edit-container.component'

const routes: Routes = [
  { path: 'AddPart', component: AddPartComponent },
  { path: 'EditPart', component: EditPartComponent },
  { path: 'AddContainer', component: AddContainerComponent},
  {path: 'EditContainer', component: EditContainerComponent}
];

@NgModule({
  imports: [ RouterModule.forRoot(routes) ],
  exports: [ RouterModule ]
})
export class AppRoutingModule {}