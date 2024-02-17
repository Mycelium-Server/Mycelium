
#include "stone_pickaxe_item.h"

StonePickaxeItem::StonePickaxeItem() = default;
StonePickaxeItem::~StonePickaxeItem() = default;

int StonePickaxeItem::getID() const {
  return 742;
}

std::shared_ptr<Item> StonePickaxeItem::clone() const {
  return std::make_shared<StonePickaxeItem>();
}
