
#include "shroomlight_item.h"

#include "../../block/builtin/shroomlight_block.h"

ShroomlightItem::ShroomlightItem() = default;
ShroomlightItem::~ShroomlightItem() = default;

int ShroomlightItem::getID() const {
  return 1104;
}

std::shared_ptr<Item> ShroomlightItem::clone() const {
  return std::make_shared<ShroomlightItem>();
}

int ShroomlightItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ShroomlightBlock().getId();
}