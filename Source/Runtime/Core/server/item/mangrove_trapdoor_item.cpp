
#include "mangrove_trapdoor_item.h"

#include "../block/mangrove_trapdoor_block.h"

MangroveTrapdoorItem::MangroveTrapdoorItem() = default;
MangroveTrapdoorItem::~MangroveTrapdoorItem() = default;

int MangroveTrapdoorItem::getID() const {
  return 673;
}

std::shared_ptr<Item> MangroveTrapdoorItem::clone() const {
  return std::make_shared<MangroveTrapdoorItem>();
}

int MangroveTrapdoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangroveTrapdoorBlock().getId();
}