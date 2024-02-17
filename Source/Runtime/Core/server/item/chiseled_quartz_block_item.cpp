
#include "chiseled_quartz_block_item.h"

#include "../block/chiseled_quartz_block_block.h"

ChiseledQuartzBlockItem::ChiseledQuartzBlockItem() = default;
ChiseledQuartzBlockItem::~ChiseledQuartzBlockItem() = default;

int ChiseledQuartzBlockItem::getID() const {
  return 374;
}

std::shared_ptr<Item> ChiseledQuartzBlockItem::clone() const {
  return std::make_shared<ChiseledQuartzBlockItem>();
}

int ChiseledQuartzBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChiseledQuartzBlockBlock().getId();
}
