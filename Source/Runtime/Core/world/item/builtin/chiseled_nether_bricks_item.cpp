
#include "chiseled_nether_bricks_item.h"

#include "../../block/builtin/chiseled_nether_bricks_block.h"

ChiseledNetherBricksItem::ChiseledNetherBricksItem() = default;
ChiseledNetherBricksItem::~ChiseledNetherBricksItem() = default;

int ChiseledNetherBricksItem::getID() const {
  return 323;
}

std::shared_ptr<Item> ChiseledNetherBricksItem::clone() const {
  return std::make_shared<ChiseledNetherBricksItem>();
}

int ChiseledNetherBricksItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChiseledNetherBricksBlock().getId();
}
