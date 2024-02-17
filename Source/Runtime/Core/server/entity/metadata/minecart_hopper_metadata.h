#pragma once

#include "abstract_minecart_container_metadata.h"

class MinecraftHopperMetadata : public AbstractMinecartContainerMetadata {
 public:
  MinecraftHopperMetadata();
  ~MinecraftHopperMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};