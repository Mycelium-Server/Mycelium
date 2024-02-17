#pragma once

#include "entity_metadata.h"

class EndCrystalMetadata : public EntityMetadata {
 public:
  EndCrystalMetadata();
  ~EndCrystalMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  std::optional<BlockPosition> beamTarget;
  bool showBottom = true;
};