#pragma once

#include "block.h"

class DeepslateCopperOreBlock : public Block {
 public:
  DeepslateCopperOreBlock();
  ~DeepslateCopperOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
