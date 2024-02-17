
#include "deepslate_gold_ore_item.h"

#include "../block/deepslate_gold_ore_block.h"

DeepslateGoldOreItem::DeepslateGoldOreItem() = default;
DeepslateGoldOreItem::~DeepslateGoldOreItem() = default;

int DeepslateGoldOreItem::getID() const {
  return 50;
}

std::shared_ptr<Item> DeepslateGoldOreItem::clone() const {
  return std::make_shared<DeepslateGoldOreItem>();
}

int DeepslateGoldOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateGoldOreBlock().getId();
}