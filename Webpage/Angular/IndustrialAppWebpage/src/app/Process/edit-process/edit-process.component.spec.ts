import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { EditProcessComponent } from '@app/Process/edit-process/edit-process.component';

describe('EditProcessComponent', () => {
  let component: EditProcessComponent;
  let fixture: ComponentFixture<EditProcessComponent>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ EditProcessComponent ]
    })
    .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(EditProcessComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
