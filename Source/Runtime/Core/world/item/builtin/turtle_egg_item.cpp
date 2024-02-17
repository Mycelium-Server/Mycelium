
#include "turtle_egg_item.h"

#include "../../block/builtin/turtle_egg_block.h"

TurtleEggItem::TurtleEggItem() = default;
TurtleEggItem::~TurtleEggItem() = default;

int TurtleEggItem::getID() const {
  return 539;
}

std::shared_ptr<Item> TurtleEggItem::clone() const {
  return std::make_shared<TurtleEggItem>();
}

int TurtleEggItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return TurtleEggBlock().getId();
}