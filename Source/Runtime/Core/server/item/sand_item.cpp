
#include "sand_item.h"

#include "../block/sand_block.h"

SandItem::SandItem() = default;
SandItem::~SandItem() = default;

int SandItem::getID() const {
  return 40;
}

std::shared_ptr<Item> SandItem::clone() const {
  return std::make_shared<SandItem>();
}

int SandItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SandBlock().getId();
}
