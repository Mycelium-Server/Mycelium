
#include "moss_block_item.h"

#include "../block/moss_block_block.h"

MossBlockItem::MossBlockItem() = default;
MossBlockItem::~MossBlockItem() = default;

int MossBlockItem::getID() const {
  return 209;
}

std::shared_ptr<Item> MossBlockItem::clone() const {
  return std::make_shared<MossBlockItem>();
}

int MossBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MossBlockBlock().getId();
}