
#include "polished_deepslate_wall_item.h"

#include "../../block/builtin/polished_deepslate_wall_block.h"

PolishedDeepslateWallItem::PolishedDeepslateWallItem() = default;
PolishedDeepslateWallItem::~PolishedDeepslateWallItem() = default;

int PolishedDeepslateWallItem::getID() const {
  return 368;
}

std::shared_ptr<Item> PolishedDeepslateWallItem::clone() const {
  return std::make_shared<PolishedDeepslateWallItem>();
}

int PolishedDeepslateWallItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedDeepslateWallBlock().getId();
}