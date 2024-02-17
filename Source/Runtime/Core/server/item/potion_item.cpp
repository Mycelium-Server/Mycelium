
#include "potion_item.h"

PotionItem::PotionItem() = default;
PotionItem::~PotionItem() = default;

int PotionItem::getID() const {
  return 902;
}

std::shared_ptr<Item> PotionItem::clone() const {
  return std::make_shared<PotionItem>();
}
