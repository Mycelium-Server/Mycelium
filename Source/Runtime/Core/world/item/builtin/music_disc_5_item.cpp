
#include "music_disc_5_item.h"

MusicDisc5Item::MusicDisc5Item() = default;
MusicDisc5Item::~MusicDisc5Item() = default;

int MusicDisc5Item::getID() const {
  return 1071;
}

std::shared_ptr<Item> MusicDisc5Item::clone() const {
  return std::make_shared<MusicDisc5Item>();
}
