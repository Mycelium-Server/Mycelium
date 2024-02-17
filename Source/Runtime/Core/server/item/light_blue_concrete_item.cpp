
#include "light_blue_concrete_item.h"

#include "../block/light_blue_concrete_block.h"

LightBlueConcreteItem::LightBlueConcreteItem() = default;
LightBlueConcreteItem::~LightBlueConcreteItem() = default;

int LightBlueConcreteItem::getID() const {
  return 510;
}

std::shared_ptr<Item> LightBlueConcreteItem::clone() const {
  return std::make_shared<LightBlueConcreteItem>();
}

int LightBlueConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueConcreteBlock().getId();
}