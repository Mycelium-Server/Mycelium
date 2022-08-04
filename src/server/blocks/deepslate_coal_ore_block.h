#pragma once

#include "block.h"

class DeepslateCoalOreBlock : public Block {
 public:
  DeepslateCoalOreBlock();
  ~DeepslateCoalOreBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
