
#include "birch_wood_item.h"

#include "../../block/builtin/birch_wood_block.h"

BirchWoodItem::BirchWoodItem() = default;
BirchWoodItem::~BirchWoodItem() = default;

int BirchWoodItem::getID() const {
  return 135;
}

std::shared_ptr<Item> BirchWoodItem::clone() const {
  return std::make_shared<BirchWoodItem>();
}

int BirchWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BirchWoodBlock().getId();
}