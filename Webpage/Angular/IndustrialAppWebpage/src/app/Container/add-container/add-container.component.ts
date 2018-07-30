import { Component, OnInit } from '@angular/core';
import { ToastrService } from 'ngx-toastr';

@Component({
  selector: 'app-add-container',
  templateUrl: './add-container.component.html',
  styleUrls: ['./add-container.component.css']
})
export class AddContainerComponent implements OnInit {

  constructor(private toastr: ToastrService) { }

  ngOnInit() {
  }

  onAddButtonPressed(name, description){
    this.toastr.success('Container added');
  }

}
