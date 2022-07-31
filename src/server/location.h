#pragma once

#include "dimension.h"

struct ProtocolPosition {
  ProtocolPosition() = default;
  explicit ProtocolPosition(unsigned long long val) {
    x = (int) (val >> 38);
    y = (int) (val & 0xFFF);
    z = (int) ((val >> 12) & 0x3FFFFFF);
  }

  ProtocolPosition(int x, int y, int z)
      : x(x),
        y(y),
        z(z) {}

  int x = 0;
  int y = 0;
  int z = 0;

  [[nodiscard]] unsigned long long toProtocol() const {
    return (((unsigned long long) x & 0x3FFFFFF) << 38) | ((z & 0x3FFFFFF) << 12) | (y & 0xFFF);
  }
};

struct RotatedProtocolPosition {
  ProtocolPosition position;
  float angle = 0;
};

struct Vector3i {
  int x = 0;
  int y = 0;
  int z = 0;
};

struct Rotation3f {
  float x = 0;
  float y = 0;
  float z = 0;
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