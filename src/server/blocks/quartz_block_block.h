#pragma once

#include "block.h"

class QuartzBlockBlock : public Block {
 public:
  QuartzBlockBlock();
  ~QuartzBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
