
#include "composter_item.h"

#include "../block/composter_block.h"

ComposterItem::ComposterItem() = default;
ComposterItem::~ComposterItem() = default;

int ComposterItem::getID() const {
  return 1088;
}

std::shared_ptr<Item> ComposterItem::clone() const {
  return std::make_shared<ComposterItem>();
}

int ComposterItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ComposterBlock().getId();
}