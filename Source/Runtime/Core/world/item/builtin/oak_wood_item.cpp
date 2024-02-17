
#include "oak_wood_item.h"

#include "../../block/builtin/oak_wood_block.h"

OakWoodItem::OakWoodItem() = default;
OakWoodItem::~OakWoodItem() = default;

int OakWoodItem::getID() const {
  return 133;
}

std::shared_ptr<Item> OakWoodItem::clone() const {
  return std::make_shared<OakWoodItem>();
}

int OakWoodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OakWoodBlock().getId();
}