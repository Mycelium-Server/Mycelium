
#include "crimson_sign_item.h"

#include "../../block/builtin/crimson_sign_block.h"

CrimsonSignItem::CrimsonSignItem() = default;
CrimsonSignItem::~CrimsonSignItem() = default;

int CrimsonSignItem::getID() const {
  return 811;
}

std::shared_ptr<Item> CrimsonSignItem::clone() const {
  return std::make_shared<CrimsonSignItem>();
}

int CrimsonSignItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonSignBlock().getId();
}