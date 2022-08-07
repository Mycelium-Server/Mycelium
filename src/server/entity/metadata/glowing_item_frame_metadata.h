#pragma once

#include "item_frame_metadata.h"

class GlowingItemFrameMetadata : public ItemFrameMetadata {
 public:
  GlowingItemFrameMetadata();
  ~GlowingItemFrameMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};