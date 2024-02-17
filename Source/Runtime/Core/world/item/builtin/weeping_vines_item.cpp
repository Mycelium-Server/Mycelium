
#include "weeping_vines_item.h"

#include "../../block/builtin/weeping_vines_block.h"

WeepingVinesItem::WeepingVinesItem() = default;
WeepingVinesItem::~WeepingVinesItem() = default;

int WeepingVinesItem::getID() const {
  return 204;
}

std::shared_ptr<Item> WeepingVinesItem::clone() const {
  return std::make_shared<WeepingVinesItem>();
}

int WeepingVinesItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return WeepingVinesBlock().getId();
}