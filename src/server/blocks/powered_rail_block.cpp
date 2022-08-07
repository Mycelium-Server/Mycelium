#include "powered_rail_block.h"

PoweredRailBlock::PoweredRailBlock() = default;
PoweredRailBlock::~PoweredRailBlock() = default;

short PoweredRailBlock::getId() const {
  if (powered == POWERED_TRUE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_TRUE) return 1535;
  if (powered == POWERED_TRUE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_FALSE) return 1536;
  if (powered == POWERED_TRUE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_TRUE) return 1537;
  if (powered == POWERED_TRUE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_FALSE) return 1538;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_TRUE) return 1539;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_FALSE) return 1540;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_TRUE) return 1541;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_FALSE) return 1542;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_TRUE) return 1543;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_FALSE) return 1544;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 1545;
  if (powered == POWERED_TRUE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 1546;
  if (powered == POWERED_FALSE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_TRUE) return 1547;
  if (powered == POWERED_FALSE && shape == SHAPE_NORTH_SOUTH && waterlogged == WATERLOGGED_FALSE) return 1548;
  if (powered == POWERED_FALSE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_TRUE) return 1549;
  if (powered == POWERED_FALSE && shape == SHAPE_EAST_WEST && waterlogged == WATERLOGGED_FALSE) return 1550;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_TRUE) return 1551;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_EAST && waterlogged == WATERLOGGED_FALSE) return 1552;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_TRUE) return 1553;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_WEST && waterlogged == WATERLOGGED_FALSE) return 1554;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_TRUE) return 1555;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_NORTH && waterlogged == WATERLOGGED_FALSE) return 1556;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_TRUE) return 1557;
  if (powered == POWERED_FALSE && shape == SHAPE_ASCENDING_SOUTH && waterlogged == WATERLOGGED_FALSE) return 1558;
  return 1548;
}
