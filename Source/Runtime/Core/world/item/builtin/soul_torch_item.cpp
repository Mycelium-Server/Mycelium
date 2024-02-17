
#include "soul_torch_item.h"

#include "../../block/builtin/soul_torch_block.h"

SoulTorchItem::SoulTorchItem() = default;
SoulTorchItem::~SoulTorchItem() = default;

int SoulTorchItem::getID() const {
  return 286;
}

std::shared_ptr<Item> SoulTorchItem::clone() const {
  return std::make_shared<SoulTorchItem>();
}

int SoulTorchItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SoulTorchBlock().getId();
}