#pragma once

#include "spellcaster_illager_metadata.h"

class IllusionerMetadata : public SpellcasterIllagerMetadata {
 public:
  IllusionerMetadata();
  ~IllusionerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer &) override;
};