#pragma once

#include "abstract_minecart_metadata.h"

class MinecraftFurnaceMetadata : public AbstractMinecartMetadata {
 public:
  MinecraftFurnaceMetadata();
  ~MinecraftFurnaceMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;

 public:
  bool hasFuel = false;
};