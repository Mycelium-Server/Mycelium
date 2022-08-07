#pragma once

#include "abstract_horse_metadata.h"

class SkeletonHorseMetadata : public AbstractHorseMetadata {
 public:
  SkeletonHorseMetadata();
  ~SkeletonHorseMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};