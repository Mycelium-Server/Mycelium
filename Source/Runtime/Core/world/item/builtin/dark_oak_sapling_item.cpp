
#include "dark_oak_sapling_item.h"

#include "../../block/builtin/dark_oak_sapling_block.h"

DarkOakSaplingItem::DarkOakSaplingItem() = default;
DarkOakSaplingItem::~DarkOakSaplingItem() = default;

int DarkOakSaplingItem::getID() const {
  return 37;
}

std::shared_ptr<Item> DarkOakSaplingItem::clone() const {
  return std::make_shared<DarkOakSaplingItem>();
}

int DarkOakSaplingItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DarkOakSaplingBlock().getId();
}