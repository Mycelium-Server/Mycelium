
#include "lightning_rod_item.h"

#include "../block/lightning_rod_block.h"

LightningRodItem::LightningRodItem() = default;
LightningRodItem::~LightningRodItem() = default;

int LightningRodItem::getID() const {
  return 624;
}

std::shared_ptr<Item> LightningRodItem::clone() const {
  return std::make_shared<LightningRodItem>();
}

int LightningRodItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightningRodBlock().getId();
}