#pragma once

#include "block.h"

class CyanWoolBlock : public Block {
 public:
  CyanWoolBlock();
  ~CyanWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
