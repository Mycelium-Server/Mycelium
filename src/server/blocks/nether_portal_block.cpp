#include "nether_portal_block.h"

NetherPortalBlock::NetherPortalBlock() = default;
NetherPortalBlock::~NetherPortalBlock() = default;

short NetherPortalBlock::getId() const {
  if (axis == AXIS_X) return 4323;
  if (axis == AXIS_Z) return 4324;
  return 4323;
}
