
#include "deepslate_bricks_item.h"

#include "../block/deepslate_bricks_block.h"

DeepslateBricksItem::DeepslateBricksItem() = default;
DeepslateBricksItem::~DeepslateBricksItem() = default;

int DeepslateBricksItem::getID() const {
  return 301;
}

std::shared_ptr<Item> DeepslateBricksItem::clone() const {
  return std::make_shared<DeepslateBricksItem>();
}

int DeepslateBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateBricksBlock().getId();
}