#pragma once

#include "raider_metadata.h"

class WitchMetadata : public RaiderMetadata {
 public:
  WitchMetadata();
  ~WitchMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isDrinkingPotion = false;
};