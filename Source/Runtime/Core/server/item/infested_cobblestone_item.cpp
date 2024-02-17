
#include "infested_cobblestone_item.h"

#include "../block/infested_cobblestone_block.h"

InfestedCobblestoneItem::InfestedCobblestoneItem() = default;
InfestedCobblestoneItem::~InfestedCobblestoneItem() = default;

int InfestedCobblestoneItem::getID() const {
  return 289;
}

std::shared_ptr<Item> InfestedCobblestoneItem::clone() const {
  return std::make_shared<InfestedCobblestoneItem>();
}

int InfestedCobblestoneItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return InfestedCobblestoneBlock().getId();
}