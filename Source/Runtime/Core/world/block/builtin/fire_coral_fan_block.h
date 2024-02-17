#pragma once

#include "block.h"

class FireCoralFanBlock : public Block {
 public:
  FireCoralFanBlock();
  ~FireCoralFanBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_TRUE;

};
