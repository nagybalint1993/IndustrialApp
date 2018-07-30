import { TestBed, inject } from '@angular/core/testing';

import { PartService } from '@app/Services/part.service';

describe('PartService', () => {
  beforeEach(() => {
    TestBed.configureTestingModule({
      providers: [PartService]
    });
  });

  it('should be created', inject([PartService], (service: PartService) => {
    expect(service).toBeTruthy();
  }));
});
