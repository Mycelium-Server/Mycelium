
#include "chorus_plant_item.h"

#include "../../block/builtin/chorus_plant_block.h"

ChorusPlantItem::ChorusPlantItem() = default;
ChorusPlantItem::~ChorusPlantItem() = default;

int ChorusPlantItem::getID() const {
  return 250;
}

std::shared_ptr<Item> ChorusPlantItem::clone() const {
  return std::make_shared<ChorusPlantItem>();
}

int ChorusPlantItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return ChorusPlantBlock().getId();
}