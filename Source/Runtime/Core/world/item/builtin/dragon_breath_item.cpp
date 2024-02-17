
#include "dragon_breath_item.h"

DragonBreathItem::DragonBreathItem() = default;
DragonBreathItem::~DragonBreathItem() = default;

int DragonBreathItem::getID() const {
  return 1047;
}

std::shared_ptr<Item> DragonBreathItem::clone() const {
  return std::make_shared<DragonBreathItem>();
}
