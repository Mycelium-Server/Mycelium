
#include "lime_concrete_item.h"

#include "../../block/builtin/lime_concrete_block.h"

LimeConcreteItem::LimeConcreteItem() = default;
LimeConcreteItem::~LimeConcreteItem() = default;

int LimeConcreteItem::getID() const {
  return 512;
}

std::shared_ptr<Item> LimeConcreteItem::clone() const {
  return std::make_shared<LimeConcreteItem>();
}

int LimeConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeConcreteBlock().getId();
}