
#include "chain_command_block_item.h"

#include "../block/chain_command_block_block.h"

ChainCommandBlockItem::ChainCommandBlockItem() = default;
ChainCommandBlockItem::~ChainCommandBlockItem() = default;

int ChainCommandBlockItem::getID() const {
  return 467;
}

std::shared_ptr<Item> ChainCommandBlockItem::clone() const {
  return std::make_shared<ChainCommandBlockItem>();
}

int ChainCommandBlockItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChainCommandBlockBlock().getId();
}