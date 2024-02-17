
#include "mangrove_planks_item.h"

#include "../block/mangrove_planks_block.h"

MangrovePlanksItem::MangrovePlanksItem() = default;
MangrovePlanksItem::~MangrovePlanksItem() = default;

int MangrovePlanksItem::getID() const {
  return 29;
}

std::shared_ptr<Item> MangrovePlanksItem::clone() const {
  return std::make_shared<MangrovePlanksItem>();
}

int MangrovePlanksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MangrovePlanksBlock().getId();
}
