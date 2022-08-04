#pragma once

#include "block.h"

class YellowCarpetBlock : public Block {
 public:
  YellowCarpetBlock();
  ~YellowCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
