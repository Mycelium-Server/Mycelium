
#include "egg_item.h"

EggItem::EggItem() = default;
EggItem::~EggItem() = default;

int EggItem::getID() const {
  return 832;
}

std::shared_ptr<Item> EggItem::clone() const {
  return std::make_shared<EggItem>();
}
