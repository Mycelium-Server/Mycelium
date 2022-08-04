#pragma once

#include "spellcaster_illager_metadata.h"

class EvokerMetadata : public SpellcasterIllagerMetadata {
 public:
  EvokerMetadata();
  ~EvokerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};