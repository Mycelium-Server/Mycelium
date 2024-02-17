
#include "crimson_fungus_item.h"

#include "../block/crimson_fungus_block.h"

CrimsonFungusItem::CrimsonFungusItem() = default;
CrimsonFungusItem::~CrimsonFungusItem() = default;

int CrimsonFungusItem::getID() const {
  return 199;
}

std::shared_ptr<Item> CrimsonFungusItem::clone() const {
  return std::make_shared<CrimsonFungusItem>();
}

int CrimsonFungusItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonFungusBlock().getId();
}