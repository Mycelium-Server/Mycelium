
#include "spider_eye_item.h"

SpiderEyeItem::SpiderEyeItem() = default;
SpiderEyeItem::~SpiderEyeItem() = default;

int SpiderEyeItem::getID() const {
  return 904;
}

std::shared_ptr<Item> SpiderEyeItem::clone() const {
  return std::make_shared<SpiderEyeItem>();
}
