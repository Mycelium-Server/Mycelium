
#include "spruce_sapling_item.h"

#include "../../block/builtin/spruce_sapling_block.h"

SpruceSaplingItem::SpruceSaplingItem() = default;
SpruceSaplingItem::~SpruceSaplingItem() = default;

int SpruceSaplingItem::getID() const {
  return 33;
}

std::shared_ptr<Item> SpruceSaplingItem::clone() const {
  return std::make_shared<SpruceSaplingItem>();
}

int SpruceSaplingItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceSaplingBlock().getId();
}
