#pragma once

#include "block.h"

class TurtleEggBlock : public Block {
 public:
  TurtleEggBlock();
  ~TurtleEggBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    EGGS_1 = 0,
    EGGS_2 = 1,
    EGGS_3 = 2,
    EGGS_4 = 3,
  } eggs = EGGS_1;

  enum {
    HATCH_0 = 0,
    HATCH_1 = 1,
    HATCH_2 = 2,
  } hatch = HATCH_0;

};
