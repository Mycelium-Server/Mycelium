
#include "music_disc_cat_item.h"

MusicDiscCatItem::MusicDiscCatItem() = default;
MusicDiscCatItem::~MusicDiscCatItem() = default;

int MusicDiscCatItem::getID() const {
  return 1059;
}

std::shared_ptr<Item> MusicDiscCatItem::clone() const {
  return std::make_shared<MusicDiscCatItem>();
}
