#pragma once

#include "block.h"

class DiamondBlockBlock : public Block {
 public:
  DiamondBlockBlock();
  ~DiamondBlockBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
