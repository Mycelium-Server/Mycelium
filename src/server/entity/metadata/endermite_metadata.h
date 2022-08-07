#pragma once

#include "monster_metadata.h"

class EndermiteMetadata : public MonsterMetadata {
 public:
  EndermiteMetadata();
  ~EndermiteMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};