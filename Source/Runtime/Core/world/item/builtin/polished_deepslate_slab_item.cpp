
#include "polished_deepslate_slab_item.h"

#include "../../block/builtin/polished_deepslate_slab_block.h"

PolishedDeepslateSlabItem::PolishedDeepslateSlabItem() = default;
PolishedDeepslateSlabItem::~PolishedDeepslateSlabItem() = default;

int PolishedDeepslateSlabItem::getID() const {
  return 604;
}

std::shared_ptr<Item> PolishedDeepslateSlabItem::clone() const {
  return std::make_shared<PolishedDeepslateSlabItem>();
}

int PolishedDeepslateSlabItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PolishedDeepslateSlabBlock().getId();
}
