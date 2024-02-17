#pragma once

#include "block.h"

class LecternBlock : public Block {
 public:
  LecternBlock();
  ~LecternBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    FACING_NORTH = 0,
    FACING_SOUTH = 1,
    FACING_WEST = 2,
    FACING_EAST = 3,
  } facing = FACING_NORTH;

  enum {
    HAS_BOOK_TRUE = 0,
    HAS_BOOK_FALSE = 1,
  } has_book = HAS_BOOK_FALSE;

  enum {
    POWERED_TRUE = 0,
    POWERED_FALSE = 1,
  } powered = POWERED_FALSE;

};
