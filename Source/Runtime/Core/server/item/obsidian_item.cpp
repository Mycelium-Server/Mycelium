
#include "obsidian_item.h"

#include "../block/obsidian_block.h"

ObsidianItem::ObsidianItem() = default;
ObsidianItem::~ObsidianItem() = default;

int ObsidianItem::getID() const {
  return 247;
}

std::shared_ptr<Item> ObsidianItem::clone() const {
  return std::make_shared<ObsidianItem>();
}

int ObsidianItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ObsidianBlock().getId();
}