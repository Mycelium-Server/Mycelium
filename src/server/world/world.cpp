#include <cmath>
#include "world.h"

World::World() = default;
World::~World() = default;

int World::getChunkPosition(int block) {
    return std::floor(double(block) / 16.0);
}

