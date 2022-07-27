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
        ProtocolPosition dst {};
        dst.x = ((unsigned) x) & 0b11111111111111111111111111;
        dst.z = ((unsigned) z) & 0b11111111111111111111111111;
        dst.y = ((unsigned) y) & 0b111111111111;
        return dst;
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