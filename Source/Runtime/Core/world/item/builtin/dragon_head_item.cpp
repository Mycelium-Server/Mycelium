
#include "dragon_head_item.h"

#include "../../block/builtin/dragon_head_block.h"

DragonHeadItem::DragonHeadItem() = default;
DragonHeadItem::~DragonHeadItem() = default;

int DragonHeadItem::getID() const {
  return 1001;
}

std::shared_ptr<Item> DragonHeadItem::clone() const {
  return std::make_shared<DragonHeadItem>();
}

int DragonHeadItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DragonHeadBlock().getId();
}