#pragma once

#include "block.h"

class CalciteBlock : public Block {
 public:
  CalciteBlock();
  ~CalciteBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
