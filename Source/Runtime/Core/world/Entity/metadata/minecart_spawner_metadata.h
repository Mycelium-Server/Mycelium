#pragma once

#include "abstract_minecart_metadata.h"

class MinecraftSpawnerMetadata : public AbstractMinecartMetadata {
 public:
  MinecraftSpawnerMetadata();
  ~MinecraftSpawnerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};