
#include "redstone_torch_item.h"

#include "../../block/builtin/redstone_torch_block.h"

RedstoneTorchItem::RedstoneTorchItem() = default;
RedstoneTorchItem::~RedstoneTorchItem() = default;

int RedstoneTorchItem::getID() const {
  return 609;
}

std::shared_ptr<Item> RedstoneTorchItem::clone() const {
  return std::make_shared<RedstoneTorchItem>();
}

int RedstoneTorchItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedstoneTorchBlock().getId();
}