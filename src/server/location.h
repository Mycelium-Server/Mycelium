/*
 * Mycelium
 * Copyright (C) 2022  JNNGL
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "../math/vec3.inl"
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

  template<class T>
  [[nodiscard]] Vector3<T> asVec3() const {
    return Vector3<T>((T) x, (T) y, (T) z);
  }

  [[nodiscard]] Vector3i asVec3i() const {
    return asVec3<int>();
  }

  [[nodiscard]] Vector3f asVec3f() const {
    return asVec3<float>();
  }

  [[nodiscard]] Vector3d asVec3d() const {
    return asVec3<double>();
  }
};

struct RotatedProtocolPosition {
  ProtocolPosition position;
  float angle = 0;
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