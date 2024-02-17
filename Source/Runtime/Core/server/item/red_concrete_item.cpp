
#include "red_concrete_item.h"

#include "../block/red_concrete_block.h"

RedConcreteItem::RedConcreteItem() = default;
RedConcreteItem::~RedConcreteItem() = default;

int RedConcreteItem::getID() const {
  return 521;
}

std::shared_ptr<Item> RedConcreteItem::clone() const {
  return std::make_shared<RedConcreteItem>();
}

int RedConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedConcreteBlock().getId();
}