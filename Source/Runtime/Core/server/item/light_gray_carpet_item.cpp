
#include "light_gray_carpet_item.h"

#include "../block/light_gray_carpet_block.h"

LightGrayCarpetItem::LightGrayCarpetItem() = default;
LightGrayCarpetItem::~LightGrayCarpetItem() = default;

int LightGrayCarpetItem::getID() const {
  return 406;
}

std::shared_ptr<Item> LightGrayCarpetItem::clone() const {
  return std::make_shared<LightGrayCarpetItem>();
}

int LightGrayCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayCarpetBlock().getId();
}
