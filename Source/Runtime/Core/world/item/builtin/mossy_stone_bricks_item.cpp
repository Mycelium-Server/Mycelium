
#include "mossy_stone_bricks_item.h"

#include "../../block/builtin/mossy_stone_bricks_block.h"

MossyStoneBricksItem::MossyStoneBricksItem() = default;
MossyStoneBricksItem::~MossyStoneBricksItem() = default;

int MossyStoneBricksItem::getID() const {
  return 296;
}

std::shared_ptr<Item> MossyStoneBricksItem::clone() const {
  return std::make_shared<MossyStoneBricksItem>();
}

int MossyStoneBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MossyStoneBricksBlock().getId();
}
