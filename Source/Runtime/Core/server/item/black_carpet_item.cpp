
#include "black_carpet_item.h"

#include "../block/black_carpet_block.h"

BlackCarpetItem::BlackCarpetItem() = default;
BlackCarpetItem::~BlackCarpetItem() = default;

int BlackCarpetItem::getID() const {
  return 413;
}

std::shared_ptr<Item> BlackCarpetItem::clone() const {
  return std::make_shared<BlackCarpetItem>();
}

int BlackCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackCarpetBlock().getId();
}