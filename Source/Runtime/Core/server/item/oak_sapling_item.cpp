
#include "oak_sapling_item.h"

#include "../block/oak_sapling_block.h"

OakSaplingItem::OakSaplingItem() = default;
OakSaplingItem::~OakSaplingItem() = default;

int OakSaplingItem::getID() const {
  return 32;
}

std::shared_ptr<Item> OakSaplingItem::clone() const {
  return std::make_shared<OakSaplingItem>();
}

int OakSaplingItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakSaplingBlock().getId();
}