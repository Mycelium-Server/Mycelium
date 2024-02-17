
#include "light_gray_concrete_item.h"

#include "../block/light_gray_concrete_block.h"

LightGrayConcreteItem::LightGrayConcreteItem() = default;
LightGrayConcreteItem::~LightGrayConcreteItem() = default;

int LightGrayConcreteItem::getID() const {
  return 515;
}

std::shared_ptr<Item> LightGrayConcreteItem::clone() const {
  return std::make_shared<LightGrayConcreteItem>();
}

int LightGrayConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightGrayConcreteBlock().getId();
}