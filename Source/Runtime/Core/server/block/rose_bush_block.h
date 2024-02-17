#pragma once

#include "block.h"

class RoseBushBlock : public Block {
 public:
  RoseBushBlock();
  ~RoseBushBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    HALF_UPPER = 0,
    HALF_LOWER = 1,
  } half = HALF_LOWER;

};
