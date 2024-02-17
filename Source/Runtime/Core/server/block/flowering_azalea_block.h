#pragma once

#include "block.h"

class FloweringAzaleaBlock : public Block {
 public:
  FloweringAzaleaBlock();
  ~FloweringAzaleaBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
