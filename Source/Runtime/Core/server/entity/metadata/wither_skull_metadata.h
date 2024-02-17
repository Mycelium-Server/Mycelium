#pragma once

#include "entity_metadata.h"

class WitherSkullMetadata : public EntityMetadata {
 public:
  WitherSkullMetadata();
  ~WitherSkullMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isInvulnerable = false;
};