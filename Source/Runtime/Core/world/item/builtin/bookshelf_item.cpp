
#include "bookshelf_item.h"

#include "../../block/builtin/bookshelf_block.h"

BookshelfItem::BookshelfItem() = default;
BookshelfItem::~BookshelfItem() = default;

int BookshelfItem::getID() const {
  return 245;
}

std::shared_ptr<Item> BookshelfItem::clone() const {
  return std::make_shared<BookshelfItem>();
}

int BookshelfItem::getBlockID(World *, const Vector3i &, const Vector3f &, const BlockFace &, const Vector3f &, bool) const {
  return BookshelfBlock().getId();
}
