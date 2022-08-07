#pragma once

#include "cow_metadata.h"

class MooshroomMetadata : public CowMetadata {
 public:
  MooshroomMetadata();
  ~MooshroomMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  std::string variant = "red";// STRING????
};