
#include "big_dripleaf_item.h"

#include "../../block/builtin/big_dripleaf_block.h"

BigDripleafItem::BigDripleafItem() = default;
BigDripleafItem::~BigDripleafItem() = default;

int BigDripleafItem::getID() const {
  return 211;
}

std::shared_ptr<Item> BigDripleafItem::clone() const {
  return std::make_shared<BigDripleafItem>();
}

int BigDripleafItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BigDripleafBlock().getId();
}
