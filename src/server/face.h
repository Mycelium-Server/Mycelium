#pragma once

#include "location.h"

enum BlockFace {
    BOTTOM = 0,
    TOP = 1,
    NORTH = 2,
    SOUTH = 3,
    WEST = 4,
    EAST = 5
};

const extern std::vector<Vector3i> BlockFaceOffsets;