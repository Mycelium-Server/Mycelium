#pragma once

#include "block.h"

class BirchSaplingBlock : public Block {
 public:
  BirchSaplingBlock();
  ~BirchSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    STAGE_0 = 0,
    STAGE_1 = 1,
  } stage = STAGE_0;

};