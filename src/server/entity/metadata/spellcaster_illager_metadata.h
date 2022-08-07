#pragma once

#include "abstract_illager_metadata.h"

class SpellcasterIllagerMetadata : public AbstractIllagerMetadata {
 public:
  SpellcasterIllagerMetadata();
  ~SpellcasterIllagerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  unsigned char spell = 0;

};