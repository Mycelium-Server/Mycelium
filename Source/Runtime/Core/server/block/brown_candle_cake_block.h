#pragma once

#include "block.h"

class BrownCandleCakeBlock : public Block {
 public:
  BrownCandleCakeBlock();
  ~BrownCandleCakeBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    LIT_TRUE = 0,
    LIT_FALSE = 1,
  } lit = LIT_FALSE;

};
