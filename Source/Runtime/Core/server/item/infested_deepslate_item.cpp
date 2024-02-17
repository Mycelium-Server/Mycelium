
#include "infested_deepslate_item.h"

#include "../block/infested_deepslate_block.h"

InfestedDeepslateItem::InfestedDeepslateItem() = default;
InfestedDeepslateItem::~InfestedDeepslateItem() = default;

int InfestedDeepslateItem::getID() const {
  return 294;
}

std::shared_ptr<Item> InfestedDeepslateItem::clone() const {
  return std::make_shared<InfestedDeepslateItem>();
}

int InfestedDeepslateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return InfestedDeepslateBlock().getId();
}