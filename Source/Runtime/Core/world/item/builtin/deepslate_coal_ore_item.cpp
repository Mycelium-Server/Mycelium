
#include "deepslate_coal_ore_item.h"

#include "../../block/builtin/deepslate_coal_ore_block.h"

DeepslateCoalOreItem::DeepslateCoalOreItem() = default;
DeepslateCoalOreItem::~DeepslateCoalOreItem() = default;

int DeepslateCoalOreItem::getID() const {
  return 44;
}

std::shared_ptr<Item> DeepslateCoalOreItem::clone() const {
  return std::make_shared<DeepslateCoalOreItem>();
}

int DeepslateCoalOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return DeepslateCoalOreBlock().getId();
}
