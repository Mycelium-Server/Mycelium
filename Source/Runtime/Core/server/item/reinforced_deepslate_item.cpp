
#include "reinforced_deepslate_item.h"

#include "../block/reinforced_deepslate_block.h"

ReinforcedDeepslateItem::ReinforcedDeepslateItem() = default;
ReinforcedDeepslateItem::~ReinforcedDeepslateItem() = default;

int ReinforcedDeepslateItem::getID() const {
  return 306;
}

std::shared_ptr<Item> ReinforcedDeepslateItem::clone() const {
  return std::make_shared<ReinforcedDeepslateItem>();
}

int ReinforcedDeepslateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ReinforcedDeepslateBlock().getId();
}