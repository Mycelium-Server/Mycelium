#pragma once

#include "block.h"

class ChorusFlowerBlock : public Block {
 public:
  ChorusFlowerBlock();
  ~ChorusFlowerBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    AGE_0 = 0,
    AGE_1 = 1,
    AGE_2 = 2,
    AGE_3 = 3,
    AGE_4 = 4,
    AGE_5 = 5,
  } age = AGE_0;

};
