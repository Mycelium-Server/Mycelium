
#include "zombie_head_item.h"

#include "../../block/builtin/zombie_head_block.h"

ZombieHeadItem::ZombieHeadItem() = default;
ZombieHeadItem::~ZombieHeadItem() = default;

int ZombieHeadItem::getID() const {
  return 999;
}

std::shared_ptr<Item> ZombieHeadItem::clone() const {
  return std::make_shared<ZombieHeadItem>();
}

int ZombieHeadItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ZombieHeadBlock().getId();
}