
#include "bone_meal_item.h"

BoneMealItem::BoneMealItem() = default;
BoneMealItem::~BoneMealItem() = default;

int BoneMealItem::getID() const {
  return 865;
}

std::shared_ptr<Item> BoneMealItem::clone() const {
  return std::make_shared<BoneMealItem>();
}
