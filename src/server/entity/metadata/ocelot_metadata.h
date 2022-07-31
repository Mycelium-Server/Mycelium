#pragma once

#include "animal_metadata.h"

class OcelotMetadata : public AnimalMetadata {
 public:
  OcelotMetadata();
  ~OcelotMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isTrusting = false;
};