
#include "large_amethyst_bud_item.h"

#include "../../block/builtin/large_amethyst_bud_block.h"

LargeAmethystBudItem::LargeAmethystBudItem() = default;
LargeAmethystBudItem::~LargeAmethystBudItem() = default;

int LargeAmethystBudItem::getID() const {
  return 1144;
}

std::shared_ptr<Item> LargeAmethystBudItem::clone() const {
  return std::make_shared<LargeAmethystBudItem>();
}

int LargeAmethystBudItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LargeAmethystBudBlock().getId();
}