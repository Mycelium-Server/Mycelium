#pragma once

#include "abstract_golem_metadata.h"

class ShulkerMetadata : public AbstractGolemMetadata {
 public:
  ShulkerMetadata();
  ~ShulkerMetadata() override;

 public:
  void wrapperWrite(MetadataBuffer &) override;

 public:
  Direction attachFace = Direction::DIRECTION_DOWN;
  std::optional<BlockPosition> attachmentPosition;
  uint8_t shieldHeight = 0;
  uint8_t color = 10;
};