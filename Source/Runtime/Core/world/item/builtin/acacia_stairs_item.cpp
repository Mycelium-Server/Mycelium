
#include "acacia_stairs_item.h"

#include "../../block/builtin/acacia_stairs_block.h"

AcaciaStairsItem::AcaciaStairsItem() = default;
AcaciaStairsItem::~AcaciaStairsItem() = default;

int AcaciaStairsItem::getID() const {
  return 342;
}

std::shared_ptr<Item> AcaciaStairsItem::clone() const {
  return std::make_shared<AcaciaStairsItem>();
}

int AcaciaStairsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AcaciaStairsBlock().getId();
}
