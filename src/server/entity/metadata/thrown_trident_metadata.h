#pragma once

#include "abstract_arrow_metadata.h"

class ThrownTridentMetadata : public AbstractArrowMetadata {
 public:
  ThrownTridentMetadata();
  ~ThrownTridentMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int loyaltyLevel = 0;
  bool hasEnchantmentGlint = false;
};