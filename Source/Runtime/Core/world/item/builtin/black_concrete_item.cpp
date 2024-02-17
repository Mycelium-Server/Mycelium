
#include "black_concrete_item.h"

#include "../../block/builtin/black_concrete_block.h"

BlackConcreteItem::BlackConcreteItem() = default;
BlackConcreteItem::~BlackConcreteItem() = default;

int BlackConcreteItem::getID() const {
  return 522;
}

std::shared_ptr<Item> BlackConcreteItem::clone() const {
  return std::make_shared<BlackConcreteItem>();
}

int BlackConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackConcreteBlock().getId();
}