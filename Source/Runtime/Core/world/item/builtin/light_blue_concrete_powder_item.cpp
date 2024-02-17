
#include "light_blue_concrete_powder_item.h"

#include "../../block/builtin/light_blue_concrete_powder_block.h"

LightBlueConcretePowderItem::LightBlueConcretePowderItem() = default;
LightBlueConcretePowderItem::~LightBlueConcretePowderItem() = default;

int LightBlueConcretePowderItem::getID() const {
  return 526;
}

std::shared_ptr<Item> LightBlueConcretePowderItem::clone() const {
  return std::make_shared<LightBlueConcretePowderItem>();
}

int LightBlueConcretePowderItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return LightBlueConcretePowderBlock().getId();
}