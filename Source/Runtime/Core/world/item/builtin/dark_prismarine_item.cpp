
#include "dark_prismarine_item.h"

#include "../../block/builtin/dark_prismarine_block.h"

DarkPrismarineItem::DarkPrismarineItem() = default;
DarkPrismarineItem::~DarkPrismarineItem() = default;

int DarkPrismarineItem::getID() const {
  return 457;
}

std::shared_ptr<Item> DarkPrismarineItem::clone() const {
  return std::make_shared<DarkPrismarineItem>();
}

int DarkPrismarineItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkPrismarineBlock().getId();
}