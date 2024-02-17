
#include "mycelium_item.h"

#include "../block/mycelium_block.h"

MyceliumItem::MyceliumItem() = default;
MyceliumItem::~MyceliumItem() = default;

int MyceliumItem::getID() const {
  return 319;
}

std::shared_ptr<Item> MyceliumItem::clone() const {
  return std::make_shared<MyceliumItem>();
}

int MyceliumItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MyceliumBlock().getId();
}