
#include "pink_carpet_item.h"

#include "../../block/builtin/pink_carpet_block.h"

PinkCarpetItem::PinkCarpetItem() = default;
PinkCarpetItem::~PinkCarpetItem() = default;

int PinkCarpetItem::getID() const {
  return 404;
}

std::shared_ptr<Item> PinkCarpetItem::clone() const {
  return std::make_shared<PinkCarpetItem>();
}

int PinkCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PinkCarpetBlock().getId();
}
