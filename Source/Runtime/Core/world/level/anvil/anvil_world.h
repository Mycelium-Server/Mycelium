#pragma once

#include "../../../server/dimension.h"
#include "level_dat.h"

class AnvilWorld {
 public:
  AnvilWorld(const std::vector<Dimension>&, const LevelDat&);
  ~AnvilWorld();

 public:
  static std::shared_ptr<AnvilWorld> load(const std::string&);
  void save(const std::string&);

  std::vector<Dimension>& getDimensions();
  LevelDat& getLevelDat();

 public:
  std::vector<Dimension> dimensions;
  LevelDat levelDat;

};
