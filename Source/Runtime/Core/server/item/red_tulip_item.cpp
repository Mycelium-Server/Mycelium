
#include "red_tulip_item.h"

#include "../block/red_tulip_block.h"

RedTulipItem::RedTulipItem() = default;
RedTulipItem::~RedTulipItem() = default;

int RedTulipItem::getID() const {
  return 188;
}

std::shared_ptr<Item> RedTulipItem::clone() const {
  return std::make_shared<RedTulipItem>();
}

int RedTulipItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return RedTulipBlock().getId();
}