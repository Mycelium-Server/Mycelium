
#include "firework_rocket_item.h"

FireworkRocketItem::FireworkRocketItem() = default;
FireworkRocketItem::~FireworkRocketItem() = default;

int FireworkRocketItem::getID() const {
  return 1004;
}

std::shared_ptr<Item> FireworkRocketItem::clone() const {
  return std::make_shared<FireworkRocketItem>();
}
