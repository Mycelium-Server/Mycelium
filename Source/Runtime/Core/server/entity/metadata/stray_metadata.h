#pragma once

#include "abstract_skeleton_metadata.h"

class StrayMetadata : public AbstractSkeletonMetadata {
 public:
  StrayMetadata();
  ~StrayMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};