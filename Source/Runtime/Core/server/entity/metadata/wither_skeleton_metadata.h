#pragma once

#include "abstract_skeleton_metadata.h"

class WitherSkeletonMetadata : public AbstractSkeletonMetadata {
 public:
  WitherSkeletonMetadata();
  ~WitherSkeletonMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};