
#include "horn_coral_block_item.h"

#include "../block/horn_coral_block_block.h"

HornCoralBlockItem::HornCoralBlockItem() = default;
HornCoralBlockItem::~HornCoralBlockItem() = default;

int HornCoralBlockItem::getID() const {
  return 549;
}

std::shared_ptr<Item> HornCoralBlockItem::clone() const {
  return std::make_shared<HornCoralBlockItem>();
}

int HornCoralBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return HornCoralBlockBlock().getId();
}
