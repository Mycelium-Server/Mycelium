
#include "trapped_chest_item.h"

#include "../../block/builtin/trapped_chest_block.h"

TrappedChestItem::TrappedChestItem() = default;
TrappedChestItem::~TrappedChestItem() = default;

int TrappedChestItem::getID() const {
  return 628;
}

std::shared_ptr<Item> TrappedChestItem::clone() const {
  return std::make_shared<TrappedChestItem>();
}

int TrappedChestItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TrappedChestBlock().getId();
}
