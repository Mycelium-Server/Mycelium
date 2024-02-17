
#include "golden_helmet_item.h"

GoldenHelmetItem::GoldenHelmetItem() = default;
GoldenHelmetItem::~GoldenHelmetItem() = default;

int GoldenHelmetItem::getID() const {
  return 790;
}

std::shared_ptr<Item> GoldenHelmetItem::clone() const {
  return std::make_shared<GoldenHelmetItem>();
}
