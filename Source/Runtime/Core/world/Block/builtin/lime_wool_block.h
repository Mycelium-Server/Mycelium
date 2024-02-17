#pragma once

#include "block.h"

class LimeWoolBlock : public Block {
 public:
  LimeWoolBlock();
  ~LimeWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
