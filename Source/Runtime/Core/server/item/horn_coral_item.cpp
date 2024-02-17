
#include "horn_coral_item.h"

#include "../block/horn_coral_block.h"

HornCoralItem::HornCoralItem() = default;
HornCoralItem::~HornCoralItem() = default;

int HornCoralItem::getID() const {
  return 554;
}

std::shared_ptr<Item> HornCoralItem::clone() const {
  return std::make_shared<HornCoralItem>();
}

int HornCoralItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return HornCoralBlock().getId();
}