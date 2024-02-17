
#include "pufferfish_item.h"

PufferfishItem::PufferfishItem() = default;
PufferfishItem::~PufferfishItem() = default;

int PufferfishItem::getID() const {
  return 843;
}

std::shared_ptr<Item> PufferfishItem::clone() const {
  return std::make_shared<PufferfishItem>();
}
