
#include "fermented_spider_eye_item.h"

FermentedSpiderEyeItem::FermentedSpiderEyeItem() = default;
FermentedSpiderEyeItem::~FermentedSpiderEyeItem() = default;

int FermentedSpiderEyeItem::getID() const {
  return 905;
}

std::shared_ptr<Item> FermentedSpiderEyeItem::clone() const {
  return std::make_shared<FermentedSpiderEyeItem>();
}
