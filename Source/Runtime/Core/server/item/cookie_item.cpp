
#include "cookie_item.h"

CookieItem::CookieItem() = default;
CookieItem::~CookieItem() = default;

int CookieItem::getID() const {
  return 885;
}

std::shared_ptr<Item> CookieItem::clone() const {
  return std::make_shared<CookieItem>();
}
