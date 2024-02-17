
#include "item_frame_item.h"

ItemFrameItem::ItemFrameItem() = default;
ItemFrameItem::~ItemFrameItem() = default;

int ItemFrameItem::getID() const {
  return 987;
}

std::shared_ptr<Item> ItemFrameItem::clone() const {
  return std::make_shared<ItemFrameItem>();
}
