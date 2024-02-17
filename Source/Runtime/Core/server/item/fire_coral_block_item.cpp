
#include "fire_coral_block_item.h"

#include "../block/fire_coral_block_block.h"

FireCoralBlockItem::FireCoralBlockItem() = default;
FireCoralBlockItem::~FireCoralBlockItem() = default;

int FireCoralBlockItem::getID() const {
  return 548;
}

std::shared_ptr<Item> FireCoralBlockItem::clone() const {
  return std::make_shared<FireCoralBlockItem>();
}

int FireCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FireCoralBlockBlock().getId();
}