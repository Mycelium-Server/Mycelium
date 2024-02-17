
#include "purple_wool_item.h"

#include "../block/purple_wool_block.h"

PurpleWoolItem::PurpleWoolItem() = default;
PurpleWoolItem::~PurpleWoolItem() = default;

int PurpleWoolItem::getID() const {
  return 177;
}

std::shared_ptr<Item> PurpleWoolItem::clone() const {
  return std::make_shared<PurpleWoolItem>();
}

int PurpleWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleWoolBlock().getId();
}