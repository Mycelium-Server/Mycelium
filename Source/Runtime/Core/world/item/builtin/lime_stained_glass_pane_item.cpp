
#include "lime_stained_glass_pane_item.h"

#include "../../block/builtin/lime_stained_glass_pane_block.h"

LimeStainedGlassPaneItem::LimeStainedGlassPaneItem() = default;
LimeStainedGlassPaneItem::~LimeStainedGlassPaneItem() = default;

int LimeStainedGlassPaneItem::getID() const {
  return 444;
}

std::shared_ptr<Item> LimeStainedGlassPaneItem::clone() const {
  return std::make_shared<LimeStainedGlassPaneItem>();
}

int LimeStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LimeStainedGlassPaneBlock().getId();
}