
#include "sticky_piston_item.h"

#include "../../block/builtin/sticky_piston_block.h"

StickyPistonItem::StickyPistonItem() = default;
StickyPistonItem::~StickyPistonItem() = default;

int StickyPistonItem::getID() const {
  return 614;
}

std::shared_ptr<Item> StickyPistonItem::clone() const {
  return std::make_shared<StickyPistonItem>();
}

int StickyPistonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StickyPistonBlock().getId();
}