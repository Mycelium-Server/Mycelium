
#include "paper_item.h"

PaperItem::PaperItem() = default;
PaperItem::~PaperItem() = default;

int PaperItem::getID() const {
  return 829;
}

std::shared_ptr<Item> PaperItem::clone() const {
  return std::make_shared<PaperItem>();
}
