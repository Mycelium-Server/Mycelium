
#include "shears_item.h"

ShearsItem::ShearsItem() = default;
ShearsItem::~ShearsItem() = default;

int ShearsItem::getID() const {
  return 887;
}

std::shared_ptr<Item> ShearsItem::clone() const {
  return std::make_shared<ShearsItem>();
}
