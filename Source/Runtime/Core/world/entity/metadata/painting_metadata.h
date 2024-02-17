#pragma once

#include "entity_metadata.h"
#include "painting_variant.h"

class PaintingMetadata : public EntityMetadata {
 public:
  PaintingMetadata();
  ~PaintingMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  PaintingVariant paintingType = PAINTING_KEBAB;
};