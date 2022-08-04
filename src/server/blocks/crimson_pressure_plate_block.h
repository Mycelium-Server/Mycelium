#pragma once

#include "block.h"

class CrimsonPressurePlateBlock : public Block {
 public:
  CrimsonPressurePlateBlock();
  ~CrimsonPressurePlateBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
