#pragma once

#include "block.h"

class BirchPlanksBlock : public Block {
 public:
  BirchPlanksBlock();
  ~BirchPlanksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  };
