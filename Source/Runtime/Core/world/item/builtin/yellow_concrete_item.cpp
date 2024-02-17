
#include "yellow_concrete_item.h"

#include "../../block/builtin/yellow_concrete_block.h"

YellowConcreteItem::YellowConcreteItem() = default;
YellowConcreteItem::~YellowConcreteItem() = default;

int YellowConcreteItem::getID() const {
  return 511;
}

std::shared_ptr<Item> YellowConcreteItem::clone() const {
  return std::make_shared<YellowConcreteItem>();
}

int YellowConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return YellowConcreteBlock().getId();
}