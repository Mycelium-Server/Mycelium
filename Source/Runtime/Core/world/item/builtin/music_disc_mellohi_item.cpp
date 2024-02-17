
#include "music_disc_mellohi_item.h"

MusicDiscMellohiItem::MusicDiscMellohiItem() = default;
MusicDiscMellohiItem::~MusicDiscMellohiItem() = default;

int MusicDiscMellohiItem::getID() const {
  return 1064;
}

std::shared_ptr<Item> MusicDiscMellohiItem::clone() const {
  return std::make_shared<MusicDiscMellohiItem>();
}
