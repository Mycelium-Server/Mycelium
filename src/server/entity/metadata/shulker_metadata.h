#pragma once

#include "abstract_golem_metadata.h"

class ShulkerMetadata : public AbstractGolemMetadata {
 public:
  ShulkerMetadata();
  ~ShulkerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer &) override;

 public:
  Direction attachFace = Direction::DOWN;
  std::optional<ProtocolPosition> attachmentPosition;
  unsigned char shieldHeight = 0;
  unsigned char color = 10;
};