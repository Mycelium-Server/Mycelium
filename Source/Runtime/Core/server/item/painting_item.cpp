
#include "painting_item.h"

PaintingItem::PaintingItem() = default;
PaintingItem::~PaintingItem() = default;

int PaintingItem::getID() const {
  return 801;
}

std::shared_ptr<Item> PaintingItem::clone() const {
  return std::make_shared<PaintingItem>();
}
