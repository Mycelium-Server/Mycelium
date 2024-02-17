#pragma once

#include "entity_metadata.h"

class EvokerFangsMetadata : public EntityMetadata {
 public:
  EvokerFangsMetadata();
  ~EvokerFangsMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};