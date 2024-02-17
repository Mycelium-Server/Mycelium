
#include "warped_fungus_on_a_stick_item.h"

WarpedFungusOnAStickItem::WarpedFungusOnAStickItem() = default;
WarpedFungusOnAStickItem::~WarpedFungusOnAStickItem() = default;

int WarpedFungusOnAStickItem::getID() const {
  return 696;
}

std::shared_ptr<Item> WarpedFungusOnAStickItem::clone() const {
  return std::make_shared<WarpedFungusOnAStickItem>();
}
