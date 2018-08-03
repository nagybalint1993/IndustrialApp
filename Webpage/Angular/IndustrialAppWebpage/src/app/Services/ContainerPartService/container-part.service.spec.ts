import { TestBed, inject } from '@angular/core/testing';

import { ContainerPartService } from '@app/Services/ContainerPartService/container-part.service';

describe('ContainerPartService', () => {
  beforeEach(() => {
    TestBed.configureTestingModule({
      providers: [ContainerPartService]
    });
  });

  it('should be created', inject([ContainerPartService], (service: ContainerPartService) => {
    expect(service).toBeTruthy();
  }));
});
