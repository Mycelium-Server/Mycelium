#pragma once

#include "abstract_minecart_metadata.h"

class MinecraftMetadata : public AbstractMinecartMetadata {
 public:
  MinecraftMetadata();
  ~MinecraftMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};