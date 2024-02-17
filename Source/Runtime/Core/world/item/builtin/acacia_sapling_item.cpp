
#include "acacia_sapling_item.h"

#include "../../block/builtin/acacia_sapling_block.h"

AcaciaSaplingItem::AcaciaSaplingItem() = default;
AcaciaSaplingItem::~AcaciaSaplingItem() = default;

int AcaciaSaplingItem::getID() const {
  return 36;
}

std::shared_ptr<Item> AcaciaSaplingItem::clone() const {
  return std::make_shared<AcaciaSaplingItem>();
}

int AcaciaSaplingItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return AcaciaSaplingBlock().getId();
}
