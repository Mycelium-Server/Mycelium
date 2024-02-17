
#include "chainmail_boots_item.h"

ChainmailBootsItem::ChainmailBootsItem() = default;
ChainmailBootsItem::~ChainmailBootsItem() = default;

int ChainmailBootsItem::getID() const {
  return 781;
}

std::shared_ptr<Item> ChainmailBootsItem::clone() const {
  return std::make_shared<ChainmailBootsItem>();
}
