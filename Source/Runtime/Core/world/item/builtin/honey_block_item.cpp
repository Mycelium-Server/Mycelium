
#include "honey_block_item.h"

#include "../../block/builtin/honey_block_block.h"

HoneyBlockItem::HoneyBlockItem() = default;
HoneyBlockItem::~HoneyBlockItem() = default;

int HoneyBlockItem::getID() const {
  return 616;
}

std::shared_ptr<Item> HoneyBlockItem::clone() const {
  return std::make_shared<HoneyBlockItem>();
}

int HoneyBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return HoneyBlockBlock().getId();
}