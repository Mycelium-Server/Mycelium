
#include "blast_furnace_item.h"

#include "../block/blast_furnace_block.h"

BlastFurnaceItem::BlastFurnaceItem() = default;
BlastFurnaceItem::~BlastFurnaceItem() = default;

int BlastFurnaceItem::getID() const {
  return 1091;
}

std::shared_ptr<Item> BlastFurnaceItem::clone() const {
  return std::make_shared<BlastFurnaceItem>();
}

int BlastFurnaceItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BlastFurnaceBlock().getId();
}
