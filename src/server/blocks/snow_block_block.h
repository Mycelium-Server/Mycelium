#pragma once

#include "block.h"

class SnowBlockBlock : public Block {
 public:
  SnowBlockBlock();
  ~SnowBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
