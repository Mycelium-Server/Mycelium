
#include "chain_item.h"

#include "../block/chain_block.h"

ChainItem::ChainItem() = default;
ChainItem::~ChainItem() = default;

int ChainItem::getID() const {
  return 311;
}

std::shared_ptr<Item> ChainItem::clone() const {
  return std::make_shared<ChainItem>();
}

int ChainItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChainBlock().getId();
}
