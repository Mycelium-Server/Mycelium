
#include "writable_book_item.h"

WritableBookItem::WritableBookItem() = default;
WritableBookItem::~WritableBookItem() = default;

int WritableBookItem::getID() const {
  return 985;
}

std::shared_ptr<Item> WritableBookItem::clone() const {
  return std::make_shared<WritableBookItem>();
}
