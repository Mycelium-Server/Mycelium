#pragma once

#include "block.h"

class HornCoralFanBlock : public Block {
 public:
  HornCoralFanBlock();
  ~HornCoralFanBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_TRUE;

};
