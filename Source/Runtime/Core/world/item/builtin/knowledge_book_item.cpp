
#include "knowledge_book_item.h"

KnowledgeBookItem::KnowledgeBookItem() = default;
KnowledgeBookItem::~KnowledgeBookItem() = default;

int KnowledgeBookItem::getID() const {
  return 1056;
}

std::shared_ptr<Item> KnowledgeBookItem::clone() const {
  return std::make_shared<KnowledgeBookItem>();
}
