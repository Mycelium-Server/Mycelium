
#include "chainmail_helmet_item.h"

ChainmailHelmetItem::ChainmailHelmetItem() = default;
ChainmailHelmetItem::~ChainmailHelmetItem() = default;

int ChainmailHelmetItem::getID() const {
  return 778;
}

std::shared_ptr<Item> ChainmailHelmetItem::clone() const {
  return std::make_shared<ChainmailHelmetItem>();
}
