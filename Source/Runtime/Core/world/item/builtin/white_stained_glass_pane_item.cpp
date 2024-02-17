
#include "white_stained_glass_pane_item.h"

#include "../../block/builtin/white_stained_glass_pane_block.h"

WhiteStainedGlassPaneItem::WhiteStainedGlassPaneItem() = default;
WhiteStainedGlassPaneItem::~WhiteStainedGlassPaneItem() = default;

int WhiteStainedGlassPaneItem::getID() const {
  return 439;
}

std::shared_ptr<Item> WhiteStainedGlassPaneItem::clone() const {
  return std::make_shared<WhiteStainedGlassPaneItem>();
}

int WhiteStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WhiteStainedGlassPaneBlock().getId();
}