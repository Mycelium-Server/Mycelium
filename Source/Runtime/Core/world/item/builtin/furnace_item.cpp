
#include "furnace_item.h"

#include "../../block/builtin/furnace_block.h"

FurnaceItem::FurnaceItem() = default;
FurnaceItem::~FurnaceItem() = default;

int FurnaceItem::getID() const {
  return 259;
}

std::shared_ptr<Item> FurnaceItem::clone() const {
  return std::make_shared<FurnaceItem>();
}

int FurnaceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return FurnaceBlock().getId();
}
