#pragma once

#include "block.h"

class SpruceSaplingBlock : public Block {
 public:
  SpruceSaplingBlock();
  ~SpruceSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    STAGE_0 = 0,
    STAGE_1 = 1,
  } stage = STAGE_0;

};
