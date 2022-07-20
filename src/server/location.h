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

struct RotatedProtocolPosition {
    ProtocolPosition position;
    float angle;
};

struct Position3d {
    double x;
    double y;
    double z;

    [[nodiscard]] ProtocolPosition toProtocolPosition() const {
        return { (unsigned long long) x, (unsigned long long) z, (unsigned long long) y };
    }
};

struct RotatedPosition3d {
    Position3d position;
    float yaw;
    float pitch;

    [[nodiscard]] ProtocolPosition toProtocolPosition() const {
        return position.toProtocolPosition();
    }
};

struct Location {
    Dimension dimension {};
    RotatedPosition3d position {};
};