#pragma once

#include "block.h"

class PottedCornflowerBlock : public Block {
 public:
  PottedCornflowerBlock();
  ~PottedCornflowerBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
