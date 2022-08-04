#pragma once

#include "block.h"

class BlueCarpetBlock : public Block {
 public:
  BlueCarpetBlock();
  ~BlueCarpetBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
