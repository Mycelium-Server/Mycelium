#pragma once

#include "block.h"

class BlackCandleBlock : public Block {
 public:
  BlackCandleBlock();
  ~BlackCandleBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    CANDLES_1 = 0,
    CANDLES_2 = 1,
    CANDLES_3 = 2,
    CANDLES_4 = 3,
  } candles = CANDLES_1;

  enum {
    LIT_TRUE = 0,
    LIT_FALSE = 1,
  } lit = LIT_FALSE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
