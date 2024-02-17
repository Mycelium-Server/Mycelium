
#include "dragon_egg_item.h"

#include "../../block/builtin/dragon_egg_block.h"

DragonEggItem::DragonEggItem() = default;
DragonEggItem::~DragonEggItem() = default;

int DragonEggItem::getID() const {
  return 334;
}

std::shared_ptr<Item> DragonEggItem::clone() const {
  return std::make_shared<DragonEggItem>();
}

int DragonEggItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DragonEggBlock().getId();
}