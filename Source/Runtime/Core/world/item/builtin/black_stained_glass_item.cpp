
#include "black_stained_glass_item.h"

#include "../../block/builtin/black_stained_glass_block.h"

BlackStainedGlassItem::BlackStainedGlassItem() = default;
BlackStainedGlassItem::~BlackStainedGlassItem() = default;

int BlackStainedGlassItem::getID() const {
  return 438;
}

std::shared_ptr<Item> BlackStainedGlassItem::clone() const {
  return std::make_shared<BlackStainedGlassItem>();
}

int BlackStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlackStainedGlassBlock().getId();
}
