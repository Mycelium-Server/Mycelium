
#include "white_bed_item.h"

#include "../block/white_bed_block.h"

WhiteBedItem::WhiteBedItem() = default;
WhiteBedItem::~WhiteBedItem() = default;

int WhiteBedItem::getID() const {
  return 869;
}

std::shared_ptr<Item> WhiteBedItem::clone() const {
  return std::make_shared<WhiteBedItem>();
}

int WhiteBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteBedBlock().getId();
}
