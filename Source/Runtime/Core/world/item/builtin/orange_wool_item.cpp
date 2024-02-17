
#include "orange_wool_item.h"

#include "../../block/builtin/orange_wool_block.h"

OrangeWoolItem::OrangeWoolItem() = default;
OrangeWoolItem::~OrangeWoolItem() = default;

int OrangeWoolItem::getID() const {
  return 168;
}

std::shared_ptr<Item> OrangeWoolItem::clone() const {
  return std::make_shared<OrangeWoolItem>();
}

int OrangeWoolItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return OrangeWoolBlock().getId();
}