
#include "soul_campfire_item.h"

#include "../../block/builtin/soul_campfire_block.h"

SoulCampfireItem::SoulCampfireItem() = default;
SoulCampfireItem::~SoulCampfireItem() = default;

int SoulCampfireItem::getID() const {
  return 1103;
}

std::shared_ptr<Item> SoulCampfireItem::clone() const {
  return std::make_shared<SoulCampfireItem>();
}

int SoulCampfireItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return SoulCampfireBlock().getId();
}