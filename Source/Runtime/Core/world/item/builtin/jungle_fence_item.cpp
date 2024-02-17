
#include "jungle_fence_item.h"

#include "../../block/builtin/jungle_fence_block.h"

JungleFenceItem::JungleFenceItem() = default;
JungleFenceItem::~JungleFenceItem() = default;

int JungleFenceItem::getID() const {
  return 271;
}

std::shared_ptr<Item> JungleFenceItem::clone() const {
  return std::make_shared<JungleFenceItem>();
}

int JungleFenceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return JungleFenceBlock().getId();
}