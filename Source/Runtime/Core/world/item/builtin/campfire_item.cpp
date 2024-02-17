
#include "campfire_item.h"

#include "../../block/builtin/campfire_block.h"

CampfireItem::CampfireItem() = default;
CampfireItem::~CampfireItem() = default;

int CampfireItem::getID() const {
  return 1102;
}

std::shared_ptr<Item> CampfireItem::clone() const {
  return std::make_shared<CampfireItem>();
}

int CampfireItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CampfireBlock().getId();
}