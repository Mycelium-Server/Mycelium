
#include "white_concrete_item.h"

#include "../block/white_concrete_block.h"

WhiteConcreteItem::WhiteConcreteItem() = default;
WhiteConcreteItem::~WhiteConcreteItem() = default;

int WhiteConcreteItem::getID() const {
  return 507;
}

std::shared_ptr<Item> WhiteConcreteItem::clone() const {
  return std::make_shared<WhiteConcreteItem>();
}

int WhiteConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteConcreteBlock().getId();
}