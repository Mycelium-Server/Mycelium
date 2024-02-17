
#include "poppy_item.h"

#include "../../block/builtin/poppy_block.h"

PoppyItem::PoppyItem() = default;
PoppyItem::~PoppyItem() = default;

int PoppyItem::getID() const {
  return 184;
}

std::shared_ptr<Item> PoppyItem::clone() const {
  return std::make_shared<PoppyItem>();
}

int PoppyItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PoppyBlock().getId();
}