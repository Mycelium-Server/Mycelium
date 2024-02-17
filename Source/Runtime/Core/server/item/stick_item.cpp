
#include "stick_item.h"

StickItem::StickItem() = default;
StickItem::~StickItem() = default;

int StickItem::getID() const {
  return 765;
}

std::shared_ptr<Item> StickItem::clone() const {
  return std::make_shared<StickItem>();
}
