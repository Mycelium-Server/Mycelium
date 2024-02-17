
#include "prismarine_item.h"

#include "../../block/builtin/prismarine_block.h"

PrismarineItem::PrismarineItem() = default;
PrismarineItem::~PrismarineItem() = default;

int PrismarineItem::getID() const {
  return 455;
}

std::shared_ptr<Item> PrismarineItem::clone() const {
  return std::make_shared<PrismarineItem>();
}

int PrismarineItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PrismarineBlock().getId();
}