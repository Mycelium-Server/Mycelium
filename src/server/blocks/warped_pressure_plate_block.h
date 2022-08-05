#pragma once

#include "block.h"

class WarpedPressurePlateBlock : public Block {
 public:
  WarpedPressurePlateBlock();
  ~WarpedPressurePlateBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};