
#include "red_sandstone_item.h"

#include "../block/red_sandstone_block.h"

RedSandstoneItem::RedSandstoneItem() = default;
RedSandstoneItem::~RedSandstoneItem() = default;

int RedSandstoneItem::getID() const {
  return 462;
}

std::shared_ptr<Item> RedSandstoneItem::clone() const {
  return std::make_shared<RedSandstoneItem>();
}

int RedSandstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedSandstoneBlock().getId();
}