#pragma once

#include "metadata.h"

class TraderLlamaMetadata : public AbstractEntityMetadata {
 public:
  TraderLlamaMetadata();
  ~TraderLlamaMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer&) override;
};