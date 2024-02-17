#pragma once

#include "block.h"

class QuartzBricksBlock : public Block {
 public:
  QuartzBricksBlock();
  ~QuartzBricksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
