
#include "magma_cream_item.h"

MagmaCreamItem::MagmaCreamItem() = default;
MagmaCreamItem::~MagmaCreamItem() = default;

int MagmaCreamItem::getID() const {
  return 907;
}

std::shared_ptr<Item> MagmaCreamItem::clone() const {
  return std::make_shared<MagmaCreamItem>();
}
