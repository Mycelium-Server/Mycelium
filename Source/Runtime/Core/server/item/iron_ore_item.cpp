
#include "iron_ore_item.h"

#include "../block/iron_ore_block.h"

IronOreItem::IronOreItem() = default;
IronOreItem::~IronOreItem() = default;

int IronOreItem::getID() const {
  return 45;
}

std::shared_ptr<Item> IronOreItem::clone() const {
  return std::make_shared<IronOreItem>();
}

int IronOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return IronOreBlock().getId();
}