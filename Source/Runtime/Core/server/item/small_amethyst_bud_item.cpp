
#include "small_amethyst_bud_item.h"

#include "../block/small_amethyst_bud_block.h"

SmallAmethystBudItem::SmallAmethystBudItem() = default;
SmallAmethystBudItem::~SmallAmethystBudItem() = default;

int SmallAmethystBudItem::getID() const {
  return 1142;
}

std::shared_ptr<Item> SmallAmethystBudItem::clone() const {
  return std::make_shared<SmallAmethystBudItem>();
}

int SmallAmethystBudItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SmallAmethystBudBlock().getId();
}