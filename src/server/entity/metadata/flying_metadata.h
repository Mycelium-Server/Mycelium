#pragma once

#include "mob_metadata.h"

class FliyingMetadata : public MobMetadata {
 public:
  FliyingMetadata();
  ~FliyingMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};