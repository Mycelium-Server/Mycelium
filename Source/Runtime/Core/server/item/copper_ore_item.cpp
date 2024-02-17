
#include "copper_ore_item.h"

#include "../block/copper_ore_block.h"

CopperOreItem::CopperOreItem() = default;
CopperOreItem::~CopperOreItem() = default;

int CopperOreItem::getID() const {
  return 47;
}

std::shared_ptr<Item> CopperOreItem::clone() const {
  return std::make_shared<CopperOreItem>();
}

int CopperOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CopperOreBlock().getId();
}