
#include "pink_concrete_item.h"

#include "../../block/builtin/pink_concrete_block.h"

PinkConcreteItem::PinkConcreteItem() = default;
PinkConcreteItem::~PinkConcreteItem() = default;

int PinkConcreteItem::getID() const {
  return 513;
}

std::shared_ptr<Item> PinkConcreteItem::clone() const {
  return std::make_shared<PinkConcreteItem>();
}

int PinkConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkConcreteBlock().getId();
}