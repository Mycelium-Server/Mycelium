
#include "blue_concrete_item.h"

#include "../block/blue_concrete_block.h"

BlueConcreteItem::BlueConcreteItem() = default;
BlueConcreteItem::~BlueConcreteItem() = default;

int BlueConcreteItem::getID() const {
  return 518;
}

std::shared_ptr<Item> BlueConcreteItem::clone() const {
  return std::make_shared<BlueConcreteItem>();
}

int BlueConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueConcreteBlock().getId();
}