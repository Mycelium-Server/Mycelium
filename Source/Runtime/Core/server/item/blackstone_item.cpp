
#include "blackstone_item.h"

#include "../block/blackstone_block.h"

BlackstoneItem::BlackstoneItem() = default;
BlackstoneItem::~BlackstoneItem() = default;

int BlackstoneItem::getID() const {
  return 1112;
}

std::shared_ptr<Item> BlackstoneItem::clone() const {
  return std::make_shared<BlackstoneItem>();
}

int BlackstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackstoneBlock().getId();
}
