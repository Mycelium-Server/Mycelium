#pragma once

#include "abstract_illager_metadata.h"

class PillagerMetadata : public AbstractIllagerMetadata {
 public:
  PillagerMetadata();
  ~PillagerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isCharging = false;
};