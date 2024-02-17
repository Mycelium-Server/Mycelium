#pragma once

#include "block.h"

class SeaPickleBlock : public Block {
 public:
  SeaPickleBlock();
  ~SeaPickleBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    PICKLES_1 = 0,
    PICKLES_2 = 1,
    PICKLES_3 = 2,
    PICKLES_4 = 3,
  } pickles = PICKLES_1;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_TRUE;

};
