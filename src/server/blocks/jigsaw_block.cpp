#include "jigsaw_block.h"

JigsawBlock::JigsawBlock() = default;
JigsawBlock::~JigsawBlock() = default;

short JigsawBlock::getId() const {
  if (orientation == ORIENTATION_DOWN_EAST) return 16948;
  if (orientation == ORIENTATION_DOWN_NORTH) return 16949;
  if (orientation == ORIENTATION_DOWN_SOUTH) return 16950;
  if (orientation == ORIENTATION_DOWN_WEST) return 16951;
  if (orientation == ORIENTATION_UP_EAST) return 16952;
  if (orientation == ORIENTATION_UP_NORTH) return 16953;
  if (orientation == ORIENTATION_UP_SOUTH) return 16954;
  if (orientation == ORIENTATION_UP_WEST) return 16955;
  if (orientation == ORIENTATION_WEST_UP) return 16956;
  if (orientation == ORIENTATION_EAST_UP) return 16957;
  if (orientation == ORIENTATION_NORTH_UP) return 16958;
  if (orientation == ORIENTATION_SOUTH_UP) return 16959;
  return 16958;
}
