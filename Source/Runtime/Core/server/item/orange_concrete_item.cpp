
#include "orange_concrete_item.h"

#include "../block/orange_concrete_block.h"

OrangeConcreteItem::OrangeConcreteItem() = default;
OrangeConcreteItem::~OrangeConcreteItem() = default;

int OrangeConcreteItem::getID() const {
  return 508;
}

std::shared_ptr<Item> OrangeConcreteItem::clone() const {
  return std::make_shared<OrangeConcreteItem>();
}

int OrangeConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeConcreteBlock().getId();
}