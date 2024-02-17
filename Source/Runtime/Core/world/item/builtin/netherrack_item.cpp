
#include "netherrack_item.h"

#include "../../block/builtin/netherrack_block.h"

NetherrackItem::NetherrackItem() = default;
NetherrackItem::~NetherrackItem() = default;

int NetherrackItem::getID() const {
  return 280;
}

std::shared_ptr<Item> NetherrackItem::clone() const {
  return std::make_shared<NetherrackItem>();
}

int NetherrackItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetherrackBlock().getId();
}