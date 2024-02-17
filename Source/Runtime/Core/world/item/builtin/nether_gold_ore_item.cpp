
#include "nether_gold_ore_item.h"

#include "../../block/builtin/nether_gold_ore_block.h"

NetherGoldOreItem::NetherGoldOreItem() = default;
NetherGoldOreItem::~NetherGoldOreItem() = default;

int NetherGoldOreItem::getID() const {
  return 59;
}

std::shared_ptr<Item> NetherGoldOreItem::clone() const {
  return std::make_shared<NetherGoldOreItem>();
}

int NetherGoldOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return NetherGoldOreBlock().getId();
}