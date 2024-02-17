
#include "green_concrete_item.h"

#include "../../block/builtin/green_concrete_block.h"

GreenConcreteItem::GreenConcreteItem() = default;
GreenConcreteItem::~GreenConcreteItem() = default;

int GreenConcreteItem::getID() const {
  return 520;
}

std::shared_ptr<Item> GreenConcreteItem::clone() const {
  return std::make_shared<GreenConcreteItem>();
}

int GreenConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenConcreteBlock().getId();
}