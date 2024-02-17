
#include "orange_stained_glass_pane_item.h"

#include "../block/orange_stained_glass_pane_block.h"

OrangeStainedGlassPaneItem::OrangeStainedGlassPaneItem() = default;
OrangeStainedGlassPaneItem::~OrangeStainedGlassPaneItem() = default;

int OrangeStainedGlassPaneItem::getID() const {
  return 440;
}

std::shared_ptr<Item> OrangeStainedGlassPaneItem::clone() const {
  return std::make_shared<OrangeStainedGlassPaneItem>();
}

int OrangeStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeStainedGlassPaneBlock().getId();
}