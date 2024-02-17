
#include "chainmail_leggings_item.h"

ChainmailLeggingsItem::ChainmailLeggingsItem() = default;
ChainmailLeggingsItem::~ChainmailLeggingsItem() = default;

int ChainmailLeggingsItem::getID() const {
  return 780;
}

std::shared_ptr<Item> ChainmailLeggingsItem::clone() const {
  return std::make_shared<ChainmailLeggingsItem>();
}
