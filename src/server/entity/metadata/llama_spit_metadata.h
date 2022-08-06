#pragma once

#include "entity_metadata.h"

class LlamaSpitMetadata : public EntityMetadata {
 public:
  LlamaSpitMetadata();
  ~LlamaSpitMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int shakingPower = 0;
  int shakingDirection = 1;
  float shakingMultiplier = 0.0;
  int customBlockIDAndDamage = 0;
  int customBlockYposition = 6;
  bool showCustomBlock = false;
};