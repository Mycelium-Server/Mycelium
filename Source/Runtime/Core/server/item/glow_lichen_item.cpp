
#include "glow_lichen_item.h"

#include "../block/glow_lichen_block.h"

GlowLichenItem::GlowLichenItem() = default;
GlowLichenItem::~GlowLichenItem() = default;

int GlowLichenItem::getID() const {
  return 315;
}

std::shared_ptr<Item> GlowLichenItem::clone() const {
  return std::make_shared<GlowLichenItem>();
}

int GlowLichenItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GlowLichenBlock().getId();
}