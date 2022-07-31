#pragma once

#include "animal_metadata.h"

class TurtleMetadata : public AnimalMetadata {
 public:
  TurtleMetadata();
  ~TurtleMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  ProtocolPosition homePos {};
  bool hasEgg = false;
  bool isLayingEgg = false;
  ProtocolPosition travelPos {};
  bool isGoingHome = false;
  bool isTraveling = false;
};