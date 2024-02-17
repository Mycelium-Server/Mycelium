
#include "red_stained_glass_item.h"

#include "../../block/builtin/red_stained_glass_block.h"

RedStainedGlassItem::RedStainedGlassItem() = default;
RedStainedGlassItem::~RedStainedGlassItem() = default;

int RedStainedGlassItem::getID() const {
  return 437;
}

std::shared_ptr<Item> RedStainedGlassItem::clone() const {
  return std::make_shared<RedStainedGlassItem>();
}

int RedStainedGlassItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedStainedGlassBlock().getId();
}