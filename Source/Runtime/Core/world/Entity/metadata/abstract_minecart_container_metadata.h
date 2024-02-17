#pragma once

#include "abstract_minecart_metadata.h"

class AbstractMinecartContainerMetadata : public AbstractMinecartMetadata {
 public:
  AbstractMinecartContainerMetadata();
  ~AbstractMinecartContainerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};