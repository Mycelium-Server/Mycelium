#pragma once

#include "dimension.h"

union ProtocolPosition {
    struct {
        unsigned long long x : 26;
        unsigned long long z : 26;
        unsigned long long y : 12;
    };

    unsigned long long value;
};

struct Position3d {
    double x;
    double y;
    double z;
};

struct Location {
    Dimension dimension;
    ProtocolPosition position;
};