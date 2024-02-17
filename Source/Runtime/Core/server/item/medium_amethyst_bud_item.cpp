
#include "medium_amethyst_bud_item.h"

#include "../block/medium_amethyst_bud_block.h"

MediumAmethystBudItem::MediumAmethystBudItem() = default;
MediumAmethystBudItem::~MediumAmethystBudItem() = default;

int MediumAmethystBudItem::getID() const {
  return 1143;
}

std::shared_ptr<Item> MediumAmethystBudItem::clone() const {
  return std::make_shared<MediumAmethystBudItem>();
}

int MediumAmethystBudItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return MediumAmethystBudBlock().getId();
}