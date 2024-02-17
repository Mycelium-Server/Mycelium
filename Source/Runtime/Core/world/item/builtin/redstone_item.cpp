
#include "redstone_item.h"

#include "../../block/builtin/redstone_wire_block.h"

RedstoneItem::RedstoneItem() = default;
RedstoneItem::~RedstoneItem() = default;

int RedstoneItem::getID() const {
  return 608;
}

std::shared_ptr<Item> RedstoneItem::clone() const {
  return std::make_shared<RedstoneItem>();
}

int RedstoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedstoneWireBlock().getId();
}