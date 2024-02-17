
#include "polished_deepslate_stairs_item.h"

#include "../../block/builtin/polished_deepslate_stairs_block.h"

PolishedDeepslateStairsItem::PolishedDeepslateStairsItem() = default;
PolishedDeepslateStairsItem::~PolishedDeepslateStairsItem() = default;

int PolishedDeepslateStairsItem::getID() const {
  return 587;
}

std::shared_ptr<Item> PolishedDeepslateStairsItem::clone() const {
  return std::make_shared<PolishedDeepslateStairsItem>();
}

int PolishedDeepslateStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedDeepslateStairsBlock().getId();
}