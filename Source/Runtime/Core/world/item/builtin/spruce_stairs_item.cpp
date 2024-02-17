
#include "spruce_stairs_item.h"

#include "../../block/builtin/spruce_stairs_block.h"

SpruceStairsItem::SpruceStairsItem() = default;
SpruceStairsItem::~SpruceStairsItem() = default;

int SpruceStairsItem::getID() const {
  return 339;
}

std::shared_ptr<Item> SpruceStairsItem::clone() const {
  return std::make_shared<SpruceStairsItem>();
}

int SpruceStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SpruceStairsBlock().getId();
}