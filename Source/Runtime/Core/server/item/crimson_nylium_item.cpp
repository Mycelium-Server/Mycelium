
#include "crimson_nylium_item.h"

#include "../block/crimson_nylium_block.h"

CrimsonNyliumItem::CrimsonNyliumItem() = default;
CrimsonNyliumItem::~CrimsonNyliumItem() = default;

int CrimsonNyliumItem::getID() const {
  return 20;
}

std::shared_ptr<Item> CrimsonNyliumItem::clone() const {
  return std::make_shared<CrimsonNyliumItem>();
}

int CrimsonNyliumItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonNyliumBlock().getId();
}