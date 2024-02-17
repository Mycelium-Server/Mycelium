
#include "nether_quartz_ore_item.h"

#include "../block/nether_quartz_ore_block.h"

NetherQuartzOreItem::NetherQuartzOreItem() = default;
NetherQuartzOreItem::~NetherQuartzOreItem() = default;

int NetherQuartzOreItem::getID() const {
  return 60;
}

std::shared_ptr<Item> NetherQuartzOreItem::clone() const {
  return std::make_shared<NetherQuartzOreItem>();
}

int NetherQuartzOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetherQuartzOreBlock().getId();
}