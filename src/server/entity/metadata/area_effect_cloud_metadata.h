#pragma once

#include "entity_metadata.h"

class AreaEffectCloudMetadata : public EntityMetadata {
 public:
  AreaEffectCloudMetadata();
  ~AreaEffectCloudMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  float radius = 0.5f;
  int color = 0;
  bool singlePoint = false;
  AbstractParticle* particle = nullptr;
};