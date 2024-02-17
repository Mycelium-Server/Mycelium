
#include "torch_item.h"

#include "../block/torch_block.h"

TorchItem::TorchItem() = default;
TorchItem::~TorchItem() = default;

int TorchItem::getID() const {
  return 248;
}

std::shared_ptr<Item> TorchItem::clone() const {
  return std::make_shared<TorchItem>();
}

int TorchItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TorchBlock().getId();
}