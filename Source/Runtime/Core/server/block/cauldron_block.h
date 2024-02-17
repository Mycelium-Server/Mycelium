#pragma once

#include "block.h"

class CauldronBlock : public Block {
 public:
  CauldronBlock();
  ~CauldronBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
