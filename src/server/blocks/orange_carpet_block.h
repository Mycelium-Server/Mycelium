#pragma once

#include "block.h"

class OrangeCarpetBlock : public Block {
 public:
  OrangeCarpetBlock();
  ~OrangeCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
