
#include "polished_deepslate_item.h"

#include "../../block/builtin/polished_deepslate_block.h"

PolishedDeepslateItem::PolishedDeepslateItem() = default;
PolishedDeepslateItem::~PolishedDeepslateItem() = default;

int PolishedDeepslateItem::getID() const {
  return 10;
}

std::shared_ptr<Item> PolishedDeepslateItem::clone() const {
  return std::make_shared<PolishedDeepslateItem>();
}

int PolishedDeepslateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedDeepslateBlock().getId();
}
