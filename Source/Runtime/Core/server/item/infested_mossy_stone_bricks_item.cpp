
#include "infested_mossy_stone_bricks_item.h"

#include "../block/infested_mossy_stone_bricks_block.h"

InfestedMossyStoneBricksItem::InfestedMossyStoneBricksItem() = default;
InfestedMossyStoneBricksItem::~InfestedMossyStoneBricksItem() = default;

int InfestedMossyStoneBricksItem::getID() const {
  return 291;
}

std::shared_ptr<Item> InfestedMossyStoneBricksItem::clone() const {
  return std::make_shared<InfestedMossyStoneBricksItem>();
}

int InfestedMossyStoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return InfestedMossyStoneBricksBlock().getId();
}