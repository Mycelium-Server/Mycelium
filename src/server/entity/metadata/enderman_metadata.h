#pragma once

#include "monster_metadata.h"

class EndermanMetadata : public MonsterMetadata {
 public:
  EndermanMetadata();
  ~EndermanMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
  // TODO: Finish
  // wrapper.writeOptBlockID(16, CarriedBlock)
  bool IsScreaming = false;
  bool IsStaring = false;
};