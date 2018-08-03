import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { EditContainerContentComponent } from '@app/ContainerContent/edit-container-content/edit-container-content.component';

describe('EditContainerContentComponent', () => {
  let component: EditContainerContentComponent;
  let fixture: ComponentFixture<EditContainerContentComponent>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ EditContainerContentComponent ]
    })
    .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(EditContainerContentComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
