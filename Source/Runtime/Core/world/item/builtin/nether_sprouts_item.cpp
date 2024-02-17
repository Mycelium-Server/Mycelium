
#include "nether_sprouts_item.h"

#include "../../block/builtin/nether_sprouts_block.h"

NetherSproutsItem::NetherSproutsItem() = default;
NetherSproutsItem::~NetherSproutsItem() = default;

int NetherSproutsItem::getID() const {
  return 203;
}

std::shared_ptr<Item> NetherSproutsItem::clone() const {
  return std::make_shared<NetherSproutsItem>();
}

int NetherSproutsItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetherSproutsBlock().getId();
}