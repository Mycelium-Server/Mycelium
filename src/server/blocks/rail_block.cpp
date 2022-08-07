#include "rail_block.h"

RailBlock::RailBlock() = default;
RailBlock::~RailBlock() = default;

short RailBlock::getId() const {
  if (shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_TRUE) return 3932;
  if (shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_FALSE) return 3933;
  if (shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_TRUE) return 3934;
  if (shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_FALSE) return 3935;
  if (shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_TRUE) return 3936;
  if (shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_FALSE) return 3937;
  if (shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_TRUE) return 3938;
  if (shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_FALSE) return 3939;
  if (shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_TRUE) return 3940;
  if (shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_FALSE) return 3941;
  if (shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 3942;
  if (shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 3943;
  if (shape == SHAPE_SOUTH_EAST && waterlogged == WATERLOGGED_TRUE) return 3944;
  if (shape == SHAPE_SOUTH_EAST && waterlogged == WATERLOGGED_FALSE) return 3945;
  if (shape == SHAPE_SOUTH_WEST && waterlogged == WATERLOGGED_TRUE) return 3946;
  if (shape == SHAPE_SOUTH_WEST && waterlogged == WATERLOGGED_FALSE) return 3947;
  if (shape == SHAPE_NORTH_WEST && waterlogged == WATERLOGGED_TRUE) return 3948;
  if (shape == SHAPE_NORTH_WEST && waterlogged == WATERLOGGED_FALSE) return 3949;
  if (shape == SHAPE_NORTH_EAST && waterlogged == WATERLOGGED_TRUE) return 3950;
  if (shape == SHAPE_NORTH_EAST && waterlogged == WATERLOGGED_FALSE) return 3951;
  return 3933;
}
