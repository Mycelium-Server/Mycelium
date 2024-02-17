
#include "splash_potion_item.h"

SplashPotionItem::SplashPotionItem() = default;
SplashPotionItem::~SplashPotionItem() = default;

int SplashPotionItem::getID() const {
  return 1048;
}

std::shared_ptr<Item> SplashPotionItem::clone() const {
  return std::make_shared<SplashPotionItem>();
}
