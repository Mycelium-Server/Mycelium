
#include "black_stained_glass_pane_item.h"

#include "../block/black_stained_glass_pane_block.h"

BlackStainedGlassPaneItem::BlackStainedGlassPaneItem() = default;
BlackStainedGlassPaneItem::~BlackStainedGlassPaneItem() = default;

int BlackStainedGlassPaneItem::getID() const {
  return 454;
}

std::shared_ptr<Item> BlackStainedGlassPaneItem::clone() const {
  return std::make_shared<BlackStainedGlassPaneItem>();
}

int BlackStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackStainedGlassPaneBlock().getId();
}