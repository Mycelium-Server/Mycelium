#pragma once

#include "block.h"

class LightGrayCarpetBlock : public Block {
 public:
  LightGrayCarpetBlock();
  ~LightGrayCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
