#pragma once

#include "block.h"

class BlackWoolBlock : public Block {
 public:
  BlackWoolBlock();
  ~BlackWoolBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
