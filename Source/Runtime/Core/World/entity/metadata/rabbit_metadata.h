#pragma once

#include "animal_metadata.h"

class RabbitMetadata : public AnimalMetadata {
 public:
  RabbitMetadata();
  ~RabbitMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int type = 0;
};