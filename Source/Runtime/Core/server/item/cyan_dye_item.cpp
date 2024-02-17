
#include "cyan_dye_item.h"

CyanDyeItem::CyanDyeItem() = default;
CyanDyeItem::~CyanDyeItem() = default;

int CyanDyeItem::getID() const {
  return 858;
}

std::shared_ptr<Item> CyanDyeItem::clone() const {
  return std::make_shared<CyanDyeItem>();
}
