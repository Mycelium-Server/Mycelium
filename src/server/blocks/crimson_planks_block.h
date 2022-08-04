#pragma once

#include "block.h"

class CrimsonPlanksBlock : public Block {
 public:
  CrimsonPlanksBlock();
  ~CrimsonPlanksBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
