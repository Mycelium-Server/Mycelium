#pragma once

#include "block.h"

class RedWoolBlock : public Block {
 public:
  RedWoolBlock();
  ~RedWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
