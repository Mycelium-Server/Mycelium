#pragma once

#include "block.h"

class StrippedDarkOakWoodBlock : public Block {
 public:
  StrippedDarkOakWoodBlock();
  ~StrippedDarkOakWoodBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    AXIS_X = 0,
    AXIS_Y = 1,
    AXIS_Z = 2,
  } axis = AXIS_Y;

};
