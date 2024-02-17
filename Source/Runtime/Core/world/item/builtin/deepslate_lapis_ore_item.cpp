
#include "deepslate_lapis_ore_item.h"

#include "../../block/builtin/deepslate_lapis_ore_block.h"

DeepslateLapisOreItem::DeepslateLapisOreItem() = default;
DeepslateLapisOreItem::~DeepslateLapisOreItem() = default;

int DeepslateLapisOreItem::getID() const {
  return 56;
}

std::shared_ptr<Item> DeepslateLapisOreItem::clone() const {
  return std::make_shared<DeepslateLapisOreItem>();
}

int DeepslateLapisOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateLapisOreBlock().getId();
}