import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { AddPartComponent } from '@app/Part/add-part/add-part.component';

describe('AddPartComponent', () => {
  let component: AddPartComponent;
  let fixture: ComponentFixture<AddPartComponent>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ AddPartComponent ]
    })
    .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(AddPartComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
