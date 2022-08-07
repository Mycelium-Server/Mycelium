#pragma once

#include "block.h"

class LightBlueCarpetBlock : public Block {
 public:
  LightBlueCarpetBlock();
  ~LightBlueCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
