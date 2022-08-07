#pragma once

#include "block.h"

class LimeCandleCakeBlock : public Block {
 public:
  LimeCandleCakeBlock();
  ~LimeCandleCakeBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    LIT_TRUE = 0,
    LIT_FALSE = 1,
  } lit = LIT_FALSE;

};
