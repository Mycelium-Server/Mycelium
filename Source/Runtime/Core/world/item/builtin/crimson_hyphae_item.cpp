
#include "crimson_hyphae_item.h"

#include "../../block/builtin/crimson_hyphae_block.h"

CrimsonHyphaeItem::CrimsonHyphaeItem() = default;
CrimsonHyphaeItem::~CrimsonHyphaeItem() = default;

int CrimsonHyphaeItem::getID() const {
  return 140;
}

std::shared_ptr<Item> CrimsonHyphaeItem::clone() const {
  return std::make_shared<CrimsonHyphaeItem>();
}

int CrimsonHyphaeItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CrimsonHyphaeBlock().getId();
}