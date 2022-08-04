#pragma once

#include "block.h"

class DeadBubbleCoralBlockBlock : public Block {
 public:
  DeadBubbleCoralBlockBlock();
  ~DeadBubbleCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
