
#include "cyan_stained_glass_pane_item.h"

#include "../../block/builtin/cyan_stained_glass_pane_block.h"

CyanStainedGlassPaneItem::CyanStainedGlassPaneItem() = default;
CyanStainedGlassPaneItem::~CyanStainedGlassPaneItem() = default;

int CyanStainedGlassPaneItem::getID() const {
  return 448;
}

std::shared_ptr<Item> CyanStainedGlassPaneItem::clone() const {
  return std::make_shared<CyanStainedGlassPaneItem>();
}

int CyanStainedGlassPaneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CyanStainedGlassPaneBlock().getId();
}