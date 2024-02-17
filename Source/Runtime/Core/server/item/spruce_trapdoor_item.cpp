
#include "spruce_trapdoor_item.h"

#include "../block/spruce_trapdoor_block.h"

SpruceTrapdoorItem::SpruceTrapdoorItem() = default;
SpruceTrapdoorItem::~SpruceTrapdoorItem() = default;

int SpruceTrapdoorItem::getID() const {
  return 668;
}

std::shared_ptr<Item> SpruceTrapdoorItem::clone() const {
  return std::make_shared<SpruceTrapdoorItem>();
}

int SpruceTrapdoorItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceTrapdoorBlock().getId();
}
