
#include "deepslate_diamond_ore_item.h"

#include "../block/deepslate_diamond_ore_block.h"

DeepslateDiamondOreItem::DeepslateDiamondOreItem() = default;
DeepslateDiamondOreItem::~DeepslateDiamondOreItem() = default;

int DeepslateDiamondOreItem::getID() const {
  return 58;
}

std::shared_ptr<Item> DeepslateDiamondOreItem::clone() const {
  return std::make_shared<DeepslateDiamondOreItem>();
}

int DeepslateDiamondOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateDiamondOreBlock().getId();
}