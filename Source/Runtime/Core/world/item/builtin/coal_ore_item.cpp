
#include "coal_ore_item.h"

#include "../../block/builtin/coal_ore_block.h"

CoalOreItem::CoalOreItem() = default;
CoalOreItem::~CoalOreItem() = default;

int CoalOreItem::getID() const {
  return 43;
}

std::shared_ptr<Item> CoalOreItem::clone() const {
  return std::make_shared<CoalOreItem>();
}

int CoalOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return CoalOreBlock().getId();
}