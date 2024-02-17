
#include "anvil_world.h"

#include <filesystem>

using path = std::filesystem::path;

#define ASSERT_EXISTS(f)                                                           \
  if (!std::filesystem::exists(f)) {                                               \
    std::cerr << "Couldn't find file/directory: " << #f << std::endl;              \
    std::cerr << "Caused by: " << __FILE__ << ", line: " << __LINE__ << std::endl; \
  }

AnvilWorld::AnvilWorld(const std::vector<Dimension>& dimensions, const LevelDat& levelDat)
    : dimensions(dimensions),
      levelDat(levelDat) {}
AnvilWorld::~AnvilWorld() = default;

std::shared_ptr<AnvilWorld> AnvilWorld::load(const std::string& name) {
  ASSERT_EXISTS(name)
  ASSERT_EXISTS(path {name} / "level.dat")

  LevelDat levelDat;

  {
    ByteBuffer levelDatBuf {path {name} / "level.dat"};
    levelDat.read(levelDatBuf);
  }

  return std::make_shared<AnvilWorld>(std::vector<Dimension> {}, levelDat);
}

void AnvilWorld::save(const std::string& name) {
}

std::vector<Dimension>& AnvilWorld::getDimensions() {
  return dimensions;
}

LevelDat& AnvilWorld::getLevelDat() {
  return levelDat;
}
