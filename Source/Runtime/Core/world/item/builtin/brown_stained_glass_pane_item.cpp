
#include "brown_stained_glass_pane_item.h"

#include "../../block/builtin/brown_stained_glass_pane_block.h"

BrownStainedGlassPaneItem::BrownStainedGlassPaneItem() = default;
BrownStainedGlassPaneItem::~BrownStainedGlassPaneItem() = default;

int BrownStainedGlassPaneItem::getID() const {
  return 451;
}

std::shared_ptr<Item> BrownStainedGlassPaneItem::clone() const {
  return std::make_shared<BrownStainedGlassPaneItem>();
}

int BrownStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BrownStainedGlassPaneBlock().getId();
}
