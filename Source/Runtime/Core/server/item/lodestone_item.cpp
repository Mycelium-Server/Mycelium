
#include "lodestone_item.h"

#include "../block/lodestone_block.h"

LodestoneItem::LodestoneItem() = default;
LodestoneItem::~LodestoneItem() = default;

int LodestoneItem::getID() const {
  return 1110;
}

std::shared_ptr<Item> LodestoneItem::clone() const {
  return std::make_shared<LodestoneItem>();
}

int LodestoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LodestoneBlock().getId();
}
