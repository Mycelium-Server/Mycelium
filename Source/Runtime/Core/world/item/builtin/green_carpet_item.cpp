
#include "green_carpet_item.h"

#include "../../block/builtin/green_carpet_block.h"

GreenCarpetItem::GreenCarpetItem() = default;
GreenCarpetItem::~GreenCarpetItem() = default;

int GreenCarpetItem::getID() const {
  return 411;
}

std::shared_ptr<Item> GreenCarpetItem::clone() const {
  return std::make_shared<GreenCarpetItem>();
}

int GreenCarpetItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return GreenCarpetBlock().getId();
}
