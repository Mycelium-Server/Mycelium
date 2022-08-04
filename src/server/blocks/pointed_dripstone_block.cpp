#include "pointed_dripstone_block.h"

PointedDripstoneBlock::PointedDripstoneBlock() = default;
PointedDripstoneBlock::~PointedDripstoneBlock() = default;

short PointedDripstoneBlock::getId() const {
  if (thickness == THICKNESS_TIP_MERGE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_TRUE) return 19638;
  if (thickness == THICKNESS_TIP_MERGE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_FALSE) return 19639;
  if (thickness == THICKNESS_TIP_MERGE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_TRUE) return 19640;
  if (thickness == THICKNESS_TIP_MERGE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_FALSE) return 19641;
  if (thickness == THICKNESS_TIP && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_TRUE) return 19642;
  if (thickness == THICKNESS_TIP && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_FALSE) return 19643;
  if (thickness == THICKNESS_TIP && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_TRUE) return 19644;
  if (thickness == THICKNESS_TIP && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_FALSE) return 19645;
  if (thickness == THICKNESS_FRUSTUM && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_TRUE) return 19646;
  if (thickness == THICKNESS_FRUSTUM && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_FALSE) return 19647;
  if (thickness == THICKNESS_FRUSTUM && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_TRUE) return 19648;
  if (thickness == THICKNESS_FRUSTUM && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_FALSE) return 19649;
  if (thickness == THICKNESS_MIDDLE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_TRUE) return 19650;
  if (thickness == THICKNESS_MIDDLE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_FALSE) return 19651;
  if (thickness == THICKNESS_MIDDLE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_TRUE) return 19652;
  if (thickness == THICKNESS_MIDDLE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_FALSE) return 19653;
  if (thickness == THICKNESS_BASE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_TRUE) return 19654;
  if (thickness == THICKNESS_BASE && vertical_direction == VERTICAL_DIRECTION_UP && waterlogged == WATERLOGGED_FALSE) return 19655;
  if (thickness == THICKNESS_BASE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_TRUE) return 19656;
  if (thickness == THICKNESS_BASE && vertical_direction == VERTICAL_DIRECTION_DOWN && waterlogged == WATERLOGGED_FALSE) return 19657;
  return 19643;
}
