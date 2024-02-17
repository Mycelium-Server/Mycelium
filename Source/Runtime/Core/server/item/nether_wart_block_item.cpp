
#include "nether_wart_block_item.h"

#include "../block/nether_wart_block_block.h"

NetherWartBlockItem::NetherWartBlockItem() = default;
NetherWartBlockItem::~NetherWartBlockItem() = default;

int NetherWartBlockItem::getID() const {
  return 469;
}

std::shared_ptr<Item> NetherWartBlockItem::clone() const {
  return std::make_shared<NetherWartBlockItem>();
}

int NetherWartBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetherWartBlockBlock().getId();
}