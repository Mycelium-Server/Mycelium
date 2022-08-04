#pragma once

#include "block.h"

class RedstoneLampBlock : public Block {
 public:
  RedstoneLampBlock();
  ~RedstoneLampBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    LIT_TRUE = 0,
    LIT_FALSE = 1,
  } lit = LIT_FALSE;

};
