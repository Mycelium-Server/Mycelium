
#include "music_disc_mall_item.h"

MusicDiscMallItem::MusicDiscMallItem() = default;
MusicDiscMallItem::~MusicDiscMallItem() = default;

int MusicDiscMallItem::getID() const {
  return 1063;
}

std::shared_ptr<Item> MusicDiscMallItem::clone() const {
  return std::make_shared<MusicDiscMallItem>();
}
