#pragma once

#include "block.h"

class CutCopperBlock : public Block {
 public:
  CutCopperBlock();
  ~CutCopperBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
