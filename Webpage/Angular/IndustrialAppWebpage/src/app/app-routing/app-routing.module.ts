import { NgModule }             from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import {AddPartComponent} from '@app/Part/add-part/add-part.component'
import {EditPartComponent} from '@app/Part/edit-part/edit-part.component'
import {AddContainerComponent} from '@app/Container/add-container/add-container.component'
import {EditContainerComponent} from '@app/Container/edit-container/edit-container.component'

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