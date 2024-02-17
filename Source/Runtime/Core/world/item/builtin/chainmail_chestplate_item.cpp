
#include "chainmail_chestplate_item.h"

ChainmailChestplateItem::ChainmailChestplateItem() = default;
ChainmailChestplateItem::~ChainmailChestplateItem() = default;

int ChainmailChestplateItem::getID() const {
  return 779;
}

std::shared_ptr<Item> ChainmailChestplateItem::clone() const {
  return std::make_shared<ChainmailChestplateItem>();
}
