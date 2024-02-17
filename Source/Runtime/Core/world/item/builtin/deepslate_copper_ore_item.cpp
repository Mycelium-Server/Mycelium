
#include "deepslate_copper_ore_item.h"

#include "../../block/builtin/deepslate_copper_ore_block.h"

DeepslateCopperOreItem::DeepslateCopperOreItem() = default;
DeepslateCopperOreItem::~DeepslateCopperOreItem() = default;

int DeepslateCopperOreItem::getID() const {
  return 48;
}

std::shared_ptr<Item> DeepslateCopperOreItem::clone() const {
  return std::make_shared<DeepslateCopperOreItem>();
}

int DeepslateCopperOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateCopperOreBlock().getId();
}