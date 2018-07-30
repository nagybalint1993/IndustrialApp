import { TestBed, inject } from '@angular/core/testing';

import { AppService } from '@app/Services/app.service';
import { Resource } from '@app/models/resource';

describe('AppService', () => {
  beforeEach(() => {
    TestBed.configureTestingModule({
      providers: [AppService]
    });
  });

  it('should be created', inject([AppService], (service: AppService<Resource>) => {
    expect(service).toBeTruthy();
  }));
});
