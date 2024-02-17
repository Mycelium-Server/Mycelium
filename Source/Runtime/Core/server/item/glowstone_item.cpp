
#include "glowstone_item.h"

#include "../block/glowstone_block.h"

GlowstoneItem::GlowstoneItem() = default;
GlowstoneItem::~GlowstoneItem() = default;

int GlowstoneItem::getID() const {
  return 287;
}

std::shared_ptr<Item> GlowstoneItem::clone() const {
  return std::make_shared<GlowstoneItem>();
}

int GlowstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GlowstoneBlock().getId();
}