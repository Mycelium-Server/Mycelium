#pragma once

#include "abstract_minecart_container_metadata.h"

class MinecartChestMetadata : public AbstractMinecartContainerMetadata {
 public:
  MinecartChestMetadata();
  ~MinecartChestMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};