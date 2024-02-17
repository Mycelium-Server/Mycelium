
#include "soul_lantern_item.h"

#include "../../block/builtin/soul_lantern_block.h"

SoulLanternItem::SoulLanternItem() = default;
SoulLanternItem::~SoulLanternItem() = default;

int SoulLanternItem::getID() const {
  return 1099;
}

std::shared_ptr<Item> SoulLanternItem::clone() const {
  return std::make_shared<SoulLanternItem>();
}

int SoulLanternItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SoulLanternBlock().getId();
}