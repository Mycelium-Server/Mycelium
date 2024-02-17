
#include "stripped_acacia_wood_item.h"

#include "../../block/builtin/stripped_acacia_wood_block.h"

StrippedAcaciaWoodItem::StrippedAcaciaWoodItem() = default;
StrippedAcaciaWoodItem::~StrippedAcaciaWoodItem() = default;

int StrippedAcaciaWoodItem::getID() const {
  return 128;
}

std::shared_ptr<Item> StrippedAcaciaWoodItem::clone() const {
  return std::make_shared<StrippedAcaciaWoodItem>();
}

int StrippedAcaciaWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return StrippedAcaciaWoodBlock().getId();
}