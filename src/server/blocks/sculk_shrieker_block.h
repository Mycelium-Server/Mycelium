#pragma once

#include "block.h"

class SculkShriekerBlock : public Block {
 public:
  SculkShriekerBlock();
  ~SculkShriekerBlock() override;

 public:
  [[nodiscard]] short getId() const override;

 public:
  enum {
    CAN_SUMMON_TRUE = 0,
    CAN_SUMMON_FALSE = 1,
  } can_summon = CAN_SUMMON_FALSE;

  enum {
    SHRIEKING_TRUE = 0,
    SHRIEKING_FALSE = 1,
  } shrieking = SHRIEKING_FALSE;

  enum {
    WATERLOGGED_TRUE = 0,
    WATERLOGGED_FALSE = 1,
  } waterlogged = WATERLOGGED_FALSE;

};
