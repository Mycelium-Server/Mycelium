
#include "pink_wool_item.h"

#include "../block/pink_wool_block.h"

PinkWoolItem::PinkWoolItem() = default;
PinkWoolItem::~PinkWoolItem() = default;

int PinkWoolItem::getID() const {
  return 173;
}

std::shared_ptr<Item> PinkWoolItem::clone() const {
  return std::make_shared<PinkWoolItem>();
}

int PinkWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkWoolBlock().getId();
}
