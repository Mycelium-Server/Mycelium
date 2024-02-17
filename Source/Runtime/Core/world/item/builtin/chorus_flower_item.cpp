
#include "chorus_flower_item.h"

#include "../../block/builtin/chorus_flower_block.h"

ChorusFlowerItem::ChorusFlowerItem() = default;
ChorusFlowerItem::~ChorusFlowerItem() = default;

int ChorusFlowerItem::getID() const {
  return 251;
}

std::shared_ptr<Item> ChorusFlowerItem::clone() const {
  return std::make_shared<ChorusFlowerItem>();
}

int ChorusFlowerItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChorusFlowerBlock().getId();
}