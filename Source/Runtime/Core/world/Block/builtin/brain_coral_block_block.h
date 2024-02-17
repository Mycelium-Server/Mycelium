#pragma once

#include "block.h"

class BrainCoralBlockBlock : public Block {
 public:
  BrainCoralBlockBlock();
  ~BrainCoralBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
