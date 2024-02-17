
#include "cracked_nether_bricks_item.h"

#include "../../block/builtin/cracked_nether_bricks_block.h"

CrackedNetherBricksItem::CrackedNetherBricksItem() = default;
CrackedNetherBricksItem::~CrackedNetherBricksItem() = default;

int CrackedNetherBricksItem::getID() const {
  return 322;
}

std::shared_ptr<Item> CrackedNetherBricksItem::clone() const {
  return std::make_shared<CrackedNetherBricksItem>();
}

int CrackedNetherBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrackedNetherBricksBlock().getId();
}
