#pragma once

#include "mob_metadata.h"

class AmbientCreatureMetadata : public MobMetadata {
 public:
  AmbientCreatureMetadata();
  ~AmbientCreatureMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};