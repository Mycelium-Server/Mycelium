#pragma once

#include "block.h"

class BirchPressurePlateBlock : public Block {
 public:
  BirchPressurePlateBlock();
  ~BirchPressurePlateBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
