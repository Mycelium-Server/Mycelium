#pragma once

#include "block.h"

class BambooBlock : public Block {
 public:
  BambooBlock();
  ~BambooBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    AGE_0 = 0,
    AGE_1 = 1,
  } age = AGE_0;

  enum {
    LEAVES_NONE = 0,
    LEAVES_SMALL = 1,
    LEAVES_LARGE = 2,
  } leaves = LEAVES_NONE;

  enum {
    STAGE_0 = 0,
    STAGE_1 = 1,
  } stage = STAGE_0;

};
