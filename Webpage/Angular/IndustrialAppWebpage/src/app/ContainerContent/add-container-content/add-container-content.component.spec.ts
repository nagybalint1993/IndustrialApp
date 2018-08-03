import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { AddContainerContentComponent } from '@app/ContainerContent/add-container-content/add-container-content.component';

describe('AddContainerContentComponent', () => {
  let component: AddContainerContentComponent;
  let fixture: ComponentFixture<AddContainerContentComponent>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ AddContainerContentComponent ]
    })
    .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(AddContainerContentComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
