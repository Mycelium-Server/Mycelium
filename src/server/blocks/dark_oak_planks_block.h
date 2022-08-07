#pragma once

#include "block.h"

class DarkOakPlanksBlock : public Block {
 public:
  DarkOakPlanksBlock();
  ~DarkOakPlanksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
