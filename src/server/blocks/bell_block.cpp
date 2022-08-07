#include "bell_block.h"

BellBlock::BellBlock() = default;
BellBlock::~BellBlock() = default;

short BellBlock::getId() const {
  if (attachment == ATTACHMENT_FLOOR && facing == FACING_NORTH && powered == POWERED_TRUE) return 16059;
  if (attachment == ATTACHMENT_FLOOR && facing == FACING_NORTH && powered == POWERED_FALSE) return 16060;
  if (attachment == ATTACHMENT_FLOOR && facing == FACING_SOUTH && powered == POWERED_TRUE) return 16061;
  if (attachment == ATTACHMENT_FLOOR && facing == FACING_SOUTH && powered == POWERED_FALSE) return 16062;
  if (attachment == ATTACHMENT_FLOOR && facing == FACING_WEST && powered == POWERED_TRUE) return 16063;
  if (attachment == ATTACHMENT_FLOOR && facing == FACING_WEST && powered == POWERED_FALSE) return 16064;
  if (attachment == ATTACHMENT_FLOOR && facing == FACING_EAST && powered == POWERED_TRUE) return 16065;
  if (attachment == ATTACHMENT_FLOOR && facing == FACING_EAST && powered == POWERED_FALSE) return 16066;
  if (attachment == ATTACHMENT_CEILING && facing == FACING_NORTH && powered == POWERED_TRUE) return 16067;
  if (attachment == ATTACHMENT_CEILING && facing == FACING_NORTH && powered == POWERED_FALSE) return 16068;
  if (attachment == ATTACHMENT_CEILING && facing == FACING_SOUTH && powered == POWERED_TRUE) return 16069;
  if (attachment == ATTACHMENT_CEILING && facing == FACING_SOUTH && powered == POWERED_FALSE) return 16070;
  if (attachment == ATTACHMENT_CEILING && facing == FACING_WEST && powered == POWERED_TRUE) return 16071;
  if (attachment == ATTACHMENT_CEILING && facing == FACING_WEST && powered == POWERED_FALSE) return 16072;
  if (attachment == ATTACHMENT_CEILING && facing == FACING_EAST && powered == POWERED_TRUE) return 16073;
  if (attachment == ATTACHMENT_CEILING && facing == FACING_EAST && powered == POWERED_FALSE) return 16074;
  if (attachment == ATTACHMENT_SINGLE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 16075;
  if (attachment == ATTACHMENT_SINGLE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 16076;
  if (attachment == ATTACHMENT_SINGLE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 16077;
  if (attachment == ATTACHMENT_SINGLE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 16078;
  if (attachment == ATTACHMENT_SINGLE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 16079;
  if (attachment == ATTACHMENT_SINGLE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 16080;
  if (attachment == ATTACHMENT_SINGLE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 16081;
  if (attachment == ATTACHMENT_SINGLE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 16082;
  if (attachment == ATTACHMENT_DOUBLE_WALL && facing == FACING_NORTH && powered == POWERED_TRUE) return 16083;
  if (attachment == ATTACHMENT_DOUBLE_WALL && facing == FACING_NORTH && powered == POWERED_FALSE) return 16084;
  if (attachment == ATTACHMENT_DOUBLE_WALL && facing == FACING_SOUTH && powered == POWERED_TRUE) return 16085;
  if (attachment == ATTACHMENT_DOUBLE_WALL && facing == FACING_SOUTH && powered == POWERED_FALSE) return 16086;
  if (attachment == ATTACHMENT_DOUBLE_WALL && facing == FACING_WEST && powered == POWERED_TRUE) return 16087;
  if (attachment == ATTACHMENT_DOUBLE_WALL && facing == FACING_WEST && powered == POWERED_FALSE) return 16088;
  if (attachment == ATTACHMENT_DOUBLE_WALL && facing == FACING_EAST && powered == POWERED_TRUE) return 16089;
  if (attachment == ATTACHMENT_DOUBLE_WALL && facing == FACING_EAST && powered == POWERED_FALSE) return 16090;
  return 16060;
}
