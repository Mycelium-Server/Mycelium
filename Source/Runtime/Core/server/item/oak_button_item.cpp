
#include "oak_button_item.h"

#include "../block/oak_button_block.h"

OakButtonItem::OakButtonItem() = default;
OakButtonItem::~OakButtonItem() = default;

int OakButtonItem::getID() const {
  return 634;
}

std::shared_ptr<Item> OakButtonItem::clone() const {
  return std::make_shared<OakButtonItem>();
}

int OakButtonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakButtonBlock().getId();
}
