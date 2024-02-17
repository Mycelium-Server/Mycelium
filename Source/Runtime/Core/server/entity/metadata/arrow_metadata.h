#pragma once

#include "abstract_arrow_metadata.h"

class ArrowMetadata : public AbstractArrowMetadata {
 public:
  ArrowMetadata();
  ~ArrowMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  int color = -1;
};