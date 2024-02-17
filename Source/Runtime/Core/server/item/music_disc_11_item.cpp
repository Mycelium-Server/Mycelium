
#include "music_disc_11_item.h"

MusicDisc11Item::MusicDisc11Item() = default;
MusicDisc11Item::~MusicDisc11Item() = default;

int MusicDisc11Item::getID() const {
  return 1068;
}

std::shared_ptr<Item> MusicDisc11Item::clone() const {
  return std::make_shared<MusicDisc11Item>();
}
