#pragma once

#include "abstract_skeleton_metadata.h"

class SkeletonMetadata : public AbstractSkeletonMetadata {
 public:
  SkeletonMetadata();
  ~SkeletonMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};