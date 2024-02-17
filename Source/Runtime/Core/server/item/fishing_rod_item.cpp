
#include "fishing_rod_item.h"

FishingRodItem::FishingRodItem() = default;
FishingRodItem::~FishingRodItem() = default;

int FishingRodItem::getID() const {
  return 836;
}

std::shared_ptr<Item> FishingRodItem::clone() const {
  return std::make_shared<FishingRodItem>();
}
