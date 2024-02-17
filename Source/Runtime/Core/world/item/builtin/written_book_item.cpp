
#include "written_book_item.h"

WrittenBookItem::WrittenBookItem() = default;
WrittenBookItem::~WrittenBookItem() = default;

int WrittenBookItem::getID() const {
  return 986;
}

std::shared_ptr<Item> WrittenBookItem::clone() const {
  return std::make_shared<WrittenBookItem>();
}
