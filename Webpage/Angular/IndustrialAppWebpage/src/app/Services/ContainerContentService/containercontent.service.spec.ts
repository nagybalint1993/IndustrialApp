import { TestBed, inject } from '@angular/core/testing';

import { ContainercontentService } from '@app/Services/ContainerContentService/containercontent.service';

describe('ContainercontentService', () => {
  beforeEach(() => {
    TestBed.configureTestingModule({
      providers: [ContainercontentService]
    });
  });

  it('should be created', inject([ContainercontentService], (service: ContainercontentService) => {
    expect(service).toBeTruthy();
  }));
});
