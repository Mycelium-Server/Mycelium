#pragma once

#include "abstract_minecart_metadata.h"

class MinecraftCommandBlockMetadata : public AbstractMinecartMetadata {
 public:
  MinecraftCommandBlockMetadata();
  ~MinecraftCommandBlockMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
 
 public:
  std::string command;
  std::string lastOutput = R"({"text":""})";
};