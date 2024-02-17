
#include "fire_coral_item.h"

#include "../block/fire_coral_block.h"

FireCoralItem::FireCoralItem() = default;
FireCoralItem::~FireCoralItem() = default;

int FireCoralItem::getID() const {
  return 553;
}

std::shared_ptr<Item> FireCoralItem::clone() const {
  return std::make_shared<FireCoralItem>();
}

int FireCoralItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FireCoralBlock().getId();
}