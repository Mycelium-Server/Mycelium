#pragma once

#include "block.h"

class BeetrootsBlock : public Block {
 public:
  BeetrootsBlock();
  ~BeetrootsBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    AGE_0 = 0,
    AGE_1 = 1,
    AGE_2 = 2,
    AGE_3 = 3,
  } age = AGE_0;

};
