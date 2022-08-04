#include "sculk_shrieker_block.h"

SculkShriekerBlock::SculkShriekerBlock() = default;
SculkShriekerBlock::~SculkShriekerBlock() = default;

short SculkShriekerBlock::getId() const {
  if (can_summon == CAN_SUMMON_TRUE && shrieking == SHRIEKING_TRUE && waterlogged == WATERLOGGED_TRUE) return 18900;
  if (can_summon == CAN_SUMMON_TRUE && shrieking == SHRIEKING_TRUE && waterlogged == WATERLOGGED_FALSE) return 18901;
  if (can_summon == CAN_SUMMON_TRUE && shrieking == SHRIEKING_FALSE && waterlogged == WATERLOGGED_TRUE) return 18902;
  if (can_summon == CAN_SUMMON_TRUE && shrieking == SHRIEKING_FALSE && waterlogged == WATERLOGGED_FALSE) return 18903;
  if (can_summon == CAN_SUMMON_FALSE && shrieking == SHRIEKING_TRUE && waterlogged == WATERLOGGED_TRUE) return 18904;
  if (can_summon == CAN_SUMMON_FALSE && shrieking == SHRIEKING_TRUE && waterlogged == WATERLOGGED_FALSE) return 18905;
  if (can_summon == CAN_SUMMON_FALSE && shrieking == SHRIEKING_FALSE && waterlogged == WATERLOGGED_TRUE) return 18906;
  if (can_summon == CAN_SUMMON_FALSE && shrieking == SHRIEKING_FALSE && waterlogged == WATERLOGGED_FALSE) return 18907;
  return 18907;
}
