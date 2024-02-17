#pragma once

#include "boat_metadata.h"

class ChestBoatMetadata : public BoatMetadata {
 public:
  ChestBoatMetadata();
  ~ChestBoatMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};