#pragma once

#include "block.h"

class PeonyBlock : public Block {
 public:
  PeonyBlock();
  ~PeonyBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    HALF_UPPER = 0,
    HALF_LOWER = 1,
  } half = HALF_LOWER;

};