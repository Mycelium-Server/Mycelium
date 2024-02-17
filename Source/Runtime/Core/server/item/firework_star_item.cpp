
#include "firework_star_item.h"

FireworkStarItem::FireworkStarItem() = default;
FireworkStarItem::~FireworkStarItem() = default;

int FireworkStarItem::getID() const {
  return 1005;
}

std::shared_ptr<Item> FireworkStarItem::clone() const {
  return std::make_shared<FireworkStarItem>();
}
