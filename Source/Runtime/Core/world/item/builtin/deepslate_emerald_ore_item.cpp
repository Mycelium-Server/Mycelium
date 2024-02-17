
#include "deepslate_emerald_ore_item.h"

#include "../../block/builtin/deepslate_emerald_ore_block.h"

DeepslateEmeraldOreItem::DeepslateEmeraldOreItem() = default;
DeepslateEmeraldOreItem::~DeepslateEmeraldOreItem() = default;

int DeepslateEmeraldOreItem::getID() const {
  return 54;
}

std::shared_ptr<Item> DeepslateEmeraldOreItem::clone() const {
  return std::make_shared<DeepslateEmeraldOreItem>();
}

int DeepslateEmeraldOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateEmeraldOreBlock().getId();
}