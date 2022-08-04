#pragma once

#include "block.h"

class JunglePressurePlateBlock : public Block {
 public:
  JunglePressurePlateBlock();
  ~JunglePressurePlateBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
