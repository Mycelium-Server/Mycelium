
#include "gold_ore_item.h"

#include "../block/gold_ore_block.h"

GoldOreItem::GoldOreItem() = default;
GoldOreItem::~GoldOreItem() = default;

int GoldOreItem::getID() const {
  return 49;
}

std::shared_ptr<Item> GoldOreItem::clone() const {
  return std::make_shared<GoldOreItem>();
}

int GoldOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GoldOreBlock().getId();
}