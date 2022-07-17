#pragma once

#include "dimension.h"

struct Position {
    double x;
    double y;
    double z;
};

struct Location {
    Dimension dimension;
    Position position;
};