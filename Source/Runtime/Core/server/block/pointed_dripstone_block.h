#pragma once

#include "block.h"

class PointedDripstoneBlock : public Block {
 public:
  PointedDripstoneBlock();
  ~PointedDripstoneBlock() override;

 public:
  [[nodiscard]] short getId() const override;
  [[nodiscard]] std::shared_ptr<Block> clone() const override;
  
 public:
  enum {
    THICKNESS_TIP_MERGE = 0,
    THICKNESS_TIP = 1,
    THICKNESS_FRUSTUM = 2,
    THICKNESS_MIDDLE = 3,
    THICKNESS_BASE = 4,
  } thickness = THICKNESS_TIP;

  enum {
    VERTICAL_DIRECTION_UP = 0,
    VERTICAL_DIRECTION_DOWN = 1,
  } vertical_direction = VERTICAL_DIRECTION_UP;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
