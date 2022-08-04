#pragma once

#include "block.h"

class RedstoneTorchBlock : public Block {
 public:
  RedstoneTorchBlock();
  ~RedstoneTorchBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    LIT_TRUE = 0,
    LIT_FALSE = 1,
  } lit = LIT_TRUE;

};
