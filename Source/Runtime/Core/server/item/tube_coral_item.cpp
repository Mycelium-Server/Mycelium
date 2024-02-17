
#include "tube_coral_item.h"

#include "../block/tube_coral_block.h"

TubeCoralItem::TubeCoralItem() = default;
TubeCoralItem::~TubeCoralItem() = default;

int TubeCoralItem::getID() const {
  return 550;
}

std::shared_ptr<Item> TubeCoralItem::clone() const {
  return std::make_shared<TubeCoralItem>();
}

int TubeCoralItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TubeCoralBlock().getId();
}