#pragma once

#include "block.h"

class CyanCarpetBlock : public Block {
 public:
  CyanCarpetBlock();
  ~CyanCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
