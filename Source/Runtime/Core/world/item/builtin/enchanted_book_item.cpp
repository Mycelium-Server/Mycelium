
#include "enchanted_book_item.h"

EnchantedBookItem::EnchantedBookItem() = default;
EnchantedBookItem::~EnchantedBookItem() = default;

int EnchantedBookItem::getID() const {
  return 1006;
}

std::shared_ptr<Item> EnchantedBookItem::clone() const {
  return std::make_shared<EnchantedBookItem>();
}
