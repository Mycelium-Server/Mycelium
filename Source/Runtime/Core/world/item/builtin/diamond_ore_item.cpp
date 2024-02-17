
#include "diamond_ore_item.h"

#include "../../block/builtin/diamond_ore_block.h"

DiamondOreItem::DiamondOreItem() = default;
DiamondOreItem::~DiamondOreItem() = default;

int DiamondOreItem::getID() const {
  return 57;
}

std::shared_ptr<Item> DiamondOreItem::clone() const {
  return std::make_shared<DiamondOreItem>();
}

int DiamondOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DiamondOreBlock().getId();
}