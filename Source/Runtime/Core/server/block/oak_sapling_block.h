#pragma once

#include "block.h"

class OakSaplingBlock : public Block {
 public:
  OakSaplingBlock();
  ~OakSaplingBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    STAGE_0 = 0,
    STAGE_1 = 1,
  } stage = STAGE_0;

};
