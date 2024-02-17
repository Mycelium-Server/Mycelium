#pragma once

#include "animal_metadata.h"

class TurtleMetadata : public AnimalMetadata {
 public:
  TurtleMetadata();
  ~TurtleMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  BlockPosition homePos {};
  bool hasEgg = false;
  bool isLayingEgg = false;
  BlockPosition travelPos {};
  bool isGoingHome = false;
  bool isTraveling = false;
};