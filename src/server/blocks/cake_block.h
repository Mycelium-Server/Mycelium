#pragma once

#include "block.h"

class CakeBlock : public Block {
 public:
  CakeBlock();
  ~CakeBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    BITES_0 = 0,
    BITES_1 = 1,
    BITES_2 = 2,
    BITES_3 = 3,
    BITES_4 = 4,
    BITES_5 = 5,
    BITES_6 = 6,
  } bites = BITES_0;

};
