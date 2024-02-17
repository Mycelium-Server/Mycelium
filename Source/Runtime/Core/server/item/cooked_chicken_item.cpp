
#include "cooked_chicken_item.h"

CookedChickenItem::CookedChickenItem() = default;
CookedChickenItem::~CookedChickenItem() = default;

int CookedChickenItem::getID() const {
  return 895;
}

std::shared_ptr<Item> CookedChickenItem::clone() const {
  return std::make_shared<CookedChickenItem>();
}
