
#include "music_disc_13_item.h"

MusicDisc13Item::MusicDisc13Item() = default;
MusicDisc13Item::~MusicDisc13Item() = default;

int MusicDisc13Item::getID() const {
  return 1058;
}

std::shared_ptr<Item> MusicDisc13Item::clone() const {
  return std::make_shared<MusicDisc13Item>();
}
