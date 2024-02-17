
#include "purple_concrete_item.h"

#include "../block/purple_concrete_block.h"

PurpleConcreteItem::PurpleConcreteItem() = default;
PurpleConcreteItem::~PurpleConcreteItem() = default;

int PurpleConcreteItem::getID() const {
  return 517;
}

std::shared_ptr<Item> PurpleConcreteItem::clone() const {
  return std::make_shared<PurpleConcreteItem>();
}

int PurpleConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleConcreteBlock().getId();
}