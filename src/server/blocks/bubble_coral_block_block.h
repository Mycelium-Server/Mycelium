#pragma once

#include "block.h"

class BubbleCoralBlockBlock : public Block {
 public:
  BubbleCoralBlockBlock();
  ~BubbleCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
