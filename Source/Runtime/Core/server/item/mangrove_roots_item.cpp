
#include "mangrove_roots_item.h"

#include "../block/mangrove_roots_block.h"

MangroveRootsItem::MangroveRootsItem() = default;
MangroveRootsItem::~MangroveRootsItem() = default;

int MangroveRootsItem::getID() const {
  return 111;
}

std::shared_ptr<Item> MangroveRootsItem::clone() const {
  return std::make_shared<MangroveRootsItem>();
}

int MangroveRootsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveRootsBlock().getId();
}