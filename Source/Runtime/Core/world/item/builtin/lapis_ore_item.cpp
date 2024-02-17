
#include "lapis_ore_item.h"

#include "../../block/builtin/lapis_ore_block.h"

LapisOreItem::LapisOreItem() = default;
LapisOreItem::~LapisOreItem() = default;

int LapisOreItem::getID() const {
  return 55;
}

std::shared_ptr<Item> LapisOreItem::clone() const {
  return std::make_shared<LapisOreItem>();
}

int LapisOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LapisOreBlock().getId();
}