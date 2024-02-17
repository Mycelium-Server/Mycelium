
#include "lime_bed_item.h"

#include "../../block/builtin/lime_bed_block.h"

LimeBedItem::LimeBedItem() = default;
LimeBedItem::~LimeBedItem() = default;

int LimeBedItem::getID() const {
  return 874;
}

std::shared_ptr<Item> LimeBedItem::clone() const {
  return std::make_shared<LimeBedItem>();
}

int LimeBedItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeBedBlock().getId();
}