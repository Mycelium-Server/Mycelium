#pragma once

#include "abstract_minecart_metadata.h"

class MinecraftTNTMetadata : public AbstractMinecartMetadata {
 public:
  MinecraftTNTMetadata();
  ~MinecraftTNTMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};