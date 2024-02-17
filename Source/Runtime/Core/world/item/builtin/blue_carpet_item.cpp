
#include "blue_carpet_item.h"

#include "../../block/builtin/blue_carpet_block.h"

BlueCarpetItem::BlueCarpetItem() = default;
BlueCarpetItem::~BlueCarpetItem() = default;

int BlueCarpetItem::getID() const {
  return 409;
}

std::shared_ptr<Item> BlueCarpetItem::clone() const {
  return std::make_shared<BlueCarpetItem>();
}

int BlueCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlueCarpetBlock().getId();
}
