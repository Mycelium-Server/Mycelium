
#include "red_wool_item.h"

#include "../../block/builtin/red_wool_block.h"

RedWoolItem::RedWoolItem() = default;
RedWoolItem::~RedWoolItem() = default;

int RedWoolItem::getID() const {
  return 181;
}

std::shared_ptr<Item> RedWoolItem::clone() const {
  return std::make_shared<RedWoolItem>();
}

int RedWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedWoolBlock().getId();
}
