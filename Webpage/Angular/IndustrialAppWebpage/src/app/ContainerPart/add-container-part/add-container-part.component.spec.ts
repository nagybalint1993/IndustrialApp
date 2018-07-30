import { async, ComponentFixture, TestBed } from '@angular/core/testing';

import { AddContainerPartComponent } from './add-container-part.component';

describe('AddContainerPartComponent', () => {
  let component: AddContainerPartComponent;
  let fixture: ComponentFixture<AddContainerPartComponent>;

  beforeEach(async(() => {
    TestBed.configureTestingModule({
      declarations: [ AddContainerPartComponent ]
    })
    .compileComponents();
  }));

  beforeEach(() => {
    fixture = TestBed.createComponent(AddContainerPartComponent);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
