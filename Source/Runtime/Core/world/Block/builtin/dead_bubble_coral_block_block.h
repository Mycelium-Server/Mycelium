#pragma once

#include "block.h"

class DeadBubbleCoralBlockBlock : public Block {
 public:
  DeadBubbleCoralBlockBlock();
  ~DeadBubbleCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
