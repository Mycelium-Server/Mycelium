#pragma once
#include "abstract_golem_metadata.h"

class IronGolemMetadata : public AbstractGolemMetadata {
 public:
  IronGolemMetadata();
  ~IronGolemMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool isPlayerCreated = false;
};