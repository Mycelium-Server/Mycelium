
#include "deepslate_iron_ore_item.h"

#include "../../block/builtin/deepslate_iron_ore_block.h"

DeepslateIronOreItem::DeepslateIronOreItem() = default;
DeepslateIronOreItem::~DeepslateIronOreItem() = default;

int DeepslateIronOreItem::getID() const {
  return 46;
}

std::shared_ptr<Item> DeepslateIronOreItem::clone() const {
  return std::make_shared<DeepslateIronOreItem>();
}

int DeepslateIronOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateIronOreBlock().getId();
}