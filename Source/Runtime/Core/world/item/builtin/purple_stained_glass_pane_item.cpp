
#include "purple_stained_glass_pane_item.h"

#include "../../block/builtin/purple_stained_glass_pane_block.h"

PurpleStainedGlassPaneItem::PurpleStainedGlassPaneItem() = default;
PurpleStainedGlassPaneItem::~PurpleStainedGlassPaneItem() = default;

int PurpleStainedGlassPaneItem::getID() const {
  return 449;
}

std::shared_ptr<Item> PurpleStainedGlassPaneItem::clone() const {
  return std::make_shared<PurpleStainedGlassPaneItem>();
}

int PurpleStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PurpleStainedGlassPaneBlock().getId();
}