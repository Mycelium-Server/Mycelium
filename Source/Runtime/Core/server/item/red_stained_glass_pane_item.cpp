
#include "red_stained_glass_pane_item.h"

#include "../block/red_stained_glass_pane_block.h"

RedStainedGlassPaneItem::RedStainedGlassPaneItem() = default;
RedStainedGlassPaneItem::~RedStainedGlassPaneItem() = default;

int RedStainedGlassPaneItem::getID() const {
  return 453;
}

std::shared_ptr<Item> RedStainedGlassPaneItem::clone() const {
  return std::make_shared<RedStainedGlassPaneItem>();
}

int RedStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedStainedGlassPaneBlock().getId();
}