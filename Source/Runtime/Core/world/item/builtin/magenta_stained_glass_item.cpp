
#include "magenta_stained_glass_item.h"

#include "../../block/builtin/magenta_stained_glass_block.h"

MagentaStainedGlassItem::MagentaStainedGlassItem() = default;
MagentaStainedGlassItem::~MagentaStainedGlassItem() = default;

int MagentaStainedGlassItem::getID() const {
  return 425;
}

std::shared_ptr<Item> MagentaStainedGlassItem::clone() const {
  return std::make_shared<MagentaStainedGlassItem>();
}

int MagentaStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MagentaStainedGlassBlock().getId();
}