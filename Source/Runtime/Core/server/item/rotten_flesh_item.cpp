
#include "rotten_flesh_item.h"

RottenFleshItem::RottenFleshItem() = default;
RottenFleshItem::~RottenFleshItem() = default;

int RottenFleshItem::getID() const {
  return 896;
}

std::shared_ptr<Item> RottenFleshItem::clone() const {
  return std::make_shared<RottenFleshItem>();
}
