
#include "cyan_concrete_item.h"

#include "../../block/builtin/cyan_concrete_block.h"

CyanConcreteItem::CyanConcreteItem() = default;
CyanConcreteItem::~CyanConcreteItem() = default;

int CyanConcreteItem::getID() const {
  return 516;
}

std::shared_ptr<Item> CyanConcreteItem::clone() const {
  return std::make_shared<CyanConcreteItem>();
}

int CyanConcreteItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanConcreteBlock().getId();
}