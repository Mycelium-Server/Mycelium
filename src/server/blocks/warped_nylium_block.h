#pragma once

#include "block.h"

class WarpedNyliumBlock : public Block {
 public:
  WarpedNyliumBlock();
  ~WarpedNyliumBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
