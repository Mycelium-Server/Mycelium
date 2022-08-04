#pragma once

#include "block.h"

class TallSeagrassBlock : public Block {
 public:
  TallSeagrassBlock();
  ~TallSeagrassBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    HALF_UPPER = 0,
    HALF_LOWER = 1,
  } half = HALF_LOWER;

};
