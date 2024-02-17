
#include "gray_concrete_item.h"

#include "../block/gray_concrete_block.h"

GrayConcreteItem::GrayConcreteItem() = default;
GrayConcreteItem::~GrayConcreteItem() = default;

int GrayConcreteItem::getID() const {
  return 514;
}

std::shared_ptr<Item> GrayConcreteItem::clone() const {
  return std::make_shared<GrayConcreteItem>();
}

int GrayConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GrayConcreteBlock().getId();
}