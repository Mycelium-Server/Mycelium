
#include "experience_bottle_item.h"

ExperienceBottleItem::ExperienceBottleItem() = default;
ExperienceBottleItem::~ExperienceBottleItem() = default;

int ExperienceBottleItem::getID() const {
  return 983;
}

std::shared_ptr<Item> ExperienceBottleItem::clone() const {
  return std::make_shared<ExperienceBottleItem>();
}
