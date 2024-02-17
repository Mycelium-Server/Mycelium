
#include "fern_item.h"

#include "../../block/builtin/fern_block.h"

FernItem::FernItem() = default;
FernItem::~FernItem() = default;

int FernItem::getID() const {
  return 161;
}

std::shared_ptr<Item> FernItem::clone() const {
  return std::make_shared<FernItem>();
}

int FernItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FernBlock().getId();
}