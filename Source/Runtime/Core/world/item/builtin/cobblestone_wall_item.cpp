
#include "cobblestone_wall_item.h"

#include "../../block/builtin/cobblestone_wall_block.h"

CobblestoneWallItem::CobblestoneWallItem() = default;
CobblestoneWallItem::~CobblestoneWallItem() = default;

int CobblestoneWallItem::getID() const {
  return 349;
}

std::shared_ptr<Item> CobblestoneWallItem::clone() const {
  return std::make_shared<CobblestoneWallItem>();
}

int CobblestoneWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CobblestoneWallBlock().getId();
}
