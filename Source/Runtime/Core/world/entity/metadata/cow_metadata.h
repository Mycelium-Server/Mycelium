#pragma once

#include "animal_metadata.h"

class CowMetadata : public AnimalMetadata {
 public:
  CowMetadata();
  ~CowMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};