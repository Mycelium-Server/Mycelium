
#include "book_item.h"

BookItem::BookItem() = default;
BookItem::~BookItem() = default;

int BookItem::getID() const {
  return 830;
}

std::shared_ptr<Item> BookItem::clone() const {
  return std::make_shared<BookItem>();
}
