#pragma once

#include "block.h"

class AirBlock : public Block {
 public:
  AirBlock();
  ~AirBlock() override;

 public:
  [[nodiscard]] short getId() const override;
};
