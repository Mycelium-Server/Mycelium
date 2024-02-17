
#include "lingering_potion_item.h"

LingeringPotionItem::LingeringPotionItem() = default;
LingeringPotionItem::~LingeringPotionItem() = default;

int LingeringPotionItem::getID() const {
  return 1051;
}

std::shared_ptr<Item> LingeringPotionItem::clone() const {
  return std::make_shared<LingeringPotionItem>();
}
