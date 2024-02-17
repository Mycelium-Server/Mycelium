
#include "magenta_stained_glass_pane_item.h"

#include "../block/magenta_stained_glass_pane_block.h"

MagentaStainedGlassPaneItem::MagentaStainedGlassPaneItem() = default;
MagentaStainedGlassPaneItem::~MagentaStainedGlassPaneItem() = default;

int MagentaStainedGlassPaneItem::getID() const {
  return 441;
}

std::shared_ptr<Item> MagentaStainedGlassPaneItem::clone() const {
  return std::make_shared<MagentaStainedGlassPaneItem>();
}

int MagentaStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaStainedGlassPaneBlock().getId();
}