
#include "emerald_ore_item.h"

#include "../../block/builtin/emerald_ore_block.h"

EmeraldOreItem::EmeraldOreItem() = default;
EmeraldOreItem::~EmeraldOreItem() = default;

int EmeraldOreItem::getID() const {
  return 53;
}

std::shared_ptr<Item> EmeraldOreItem::clone() const {
  return std::make_shared<EmeraldOreItem>();
}

int EmeraldOreItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return EmeraldOreBlock().getId();
}