#pragma once

#include "block.h"

class PottedSpruceSaplingBlock : public Block {
 public:
  PottedSpruceSaplingBlock();
  ~PottedSpruceSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
