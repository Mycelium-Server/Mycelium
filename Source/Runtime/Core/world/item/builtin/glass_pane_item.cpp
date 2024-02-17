
#include "glass_pane_item.h"

#include "../../block/builtin/glass_pane_block.h"

GlassPaneItem::GlassPaneItem() = default;
GlassPaneItem::~GlassPaneItem() = default;

int GlassPaneItem::getID() const {
  return 312;
}

std::shared_ptr<Item> GlassPaneItem::clone() const {
  return std::make_shared<GlassPaneItem>();
}

int GlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GlassPaneBlock().getId();
}
