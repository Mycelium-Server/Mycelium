
#include "orange_stained_glass_item.h"

#include "../block/orange_stained_glass_block.h"

OrangeStainedGlassItem::OrangeStainedGlassItem() = default;
OrangeStainedGlassItem::~OrangeStainedGlassItem() = default;

int OrangeStainedGlassItem::getID() const {
  return 424;
}

std::shared_ptr<Item> OrangeStainedGlassItem::clone() const {
  return std::make_shared<OrangeStainedGlassItem>();
}

int OrangeStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeStainedGlassBlock().getId();
}