
#include "quartz_bricks_item.h"

#include "../../block/builtin/quartz_bricks_block.h"

QuartzBricksItem::QuartzBricksItem() = default;
QuartzBricksItem::~QuartzBricksItem() = default;

int QuartzBricksItem::getID() const {
  return 376;
}

std::shared_ptr<Item> QuartzBricksItem::clone() const {
  return std::make_shared<QuartzBricksItem>();
}

int QuartzBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return QuartzBricksBlock().getId();
}