
#include "deepslate_item.h"

#include "../../block/builtin/deepslate_block.h"

DeepslateItem::DeepslateItem() = default;
DeepslateItem::~DeepslateItem() = default;

int DeepslateItem::getID() const {
  return 8;
}

std::shared_ptr<Item> DeepslateItem::clone() const {
  return std::make_shared<DeepslateItem>();
}

int DeepslateItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateBlock().getId();
}
