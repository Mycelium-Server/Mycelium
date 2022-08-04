#pragma once

#include "block.h"

class WarpedPlanksBlock : public Block {
 public:
  WarpedPlanksBlock();
  ~WarpedPlanksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
