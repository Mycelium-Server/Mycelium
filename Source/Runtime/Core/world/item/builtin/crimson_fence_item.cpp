
#include "crimson_fence_item.h"

#include "../../block/builtin/crimson_fence_block.h"

CrimsonFenceItem::CrimsonFenceItem() = default;
CrimsonFenceItem::~CrimsonFenceItem() = default;

int CrimsonFenceItem::getID() const {
  return 275;
}

std::shared_ptr<Item> CrimsonFenceItem::clone() const {
  return std::make_shared<CrimsonFenceItem>();
}

int CrimsonFenceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonFenceBlock().getId();
}