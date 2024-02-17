
#include "crimson_roots_item.h"

#include "../block/crimson_roots_block.h"

CrimsonRootsItem::CrimsonRootsItem() = default;
CrimsonRootsItem::~CrimsonRootsItem() = default;

int CrimsonRootsItem::getID() const {
  return 201;
}

std::shared_ptr<Item> CrimsonRootsItem::clone() const {
  return std::make_shared<CrimsonRootsItem>();
}

int CrimsonRootsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonRootsBlock().getId();
}