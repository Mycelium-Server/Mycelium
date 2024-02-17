#pragma once

#include "block.h"

class CoalBlockBlock : public Block {
 public:
  CoalBlockBlock();
  ~CoalBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
