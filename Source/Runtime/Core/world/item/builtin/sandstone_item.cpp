
#include "sandstone_item.h"

#include "../../block/builtin/sandstone_block.h"

SandstoneItem::SandstoneItem() = default;
SandstoneItem::~SandstoneItem() = default;

int SandstoneItem::getID() const {
  return 156;
}

std::shared_ptr<Item> SandstoneItem::clone() const {
  return std::make_shared<SandstoneItem>();
}

int SandstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SandstoneBlock().getId();
}