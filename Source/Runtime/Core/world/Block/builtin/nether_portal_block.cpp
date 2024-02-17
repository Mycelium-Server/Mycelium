

#include "nether_portal_block.h"

NetherPortalBlock::NetherPortalBlock() = default;
NetherPortalBlock::~NetherPortalBlock() = default;

short NetherPortalBlock::getId() const {
  return 4323 + axis * 1;
}

std::shared_ptr<Block> NetherPortalBlock::clone() const {
  std::shared_ptr<NetherPortalBlock> copy = std::make_shared<NetherPortalBlock>();
  copy->axis = axis;
  return copy;
}
