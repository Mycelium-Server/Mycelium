#pragma once

#include "ambient_creature_metadata.h"

class BatMetadata : public AmbientCreatureMetadata {
 public:
  BatMetadata();
  ~BatMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isHanging = false;
};