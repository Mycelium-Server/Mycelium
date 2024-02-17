
#include "piston_item.h"

#include "../../block/builtin/piston_block.h"

PistonItem::PistonItem() = default;
PistonItem::~PistonItem() = default;

int PistonItem::getID() const {
  return 613;
}

std::shared_ptr<Item> PistonItem::clone() const {
  return std::make_shared<PistonItem>();
}

int PistonItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return PistonBlock().getId();
}
