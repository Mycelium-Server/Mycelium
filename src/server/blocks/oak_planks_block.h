#pragma once

#include "block.h"

class OakPlanksBlock : public Block {
 public:
  OakPlanksBlock();
  ~OakPlanksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
