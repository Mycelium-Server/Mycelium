#pragma once

#include "block.h"

class MyceliumBlock : public Block {
 public:
  MyceliumBlock();
  ~MyceliumBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    SNOWY_TRUE = 0,
    SNOWY_FALSE = 1,
  } snowy = SNOWY_FALSE;

};
