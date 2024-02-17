
#include "sculk_catalyst_item.h"

#include "../../block/builtin/sculk_catalyst_block.h"

SculkCatalystItem::SculkCatalystItem() = default;
SculkCatalystItem::~SculkCatalystItem() = default;

int SculkCatalystItem::getID() const {
  return 328;
}

std::shared_ptr<Item> SculkCatalystItem::clone() const {
  return std::make_shared<SculkCatalystItem>();
}

int SculkCatalystItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SculkCatalystBlock().getId();
}