
#include "saddle_item.h"

SaddleItem::SaddleItem() = default;
SaddleItem::~SaddleItem() = default;

int SaddleItem::getID() const {
  return 689;
}

std::shared_ptr<Item> SaddleItem::clone() const {
  return std::make_shared<SaddleItem>();
}
