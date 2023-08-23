/*
 * Mycelium
 * Copyright (C) 2022 - 2023  JNNGL
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

class Dimension;

typedef Vector3i BlockPosition;

class EntityPosition {
 public:
  EntityPosition(double, double, double, float, float);
  EntityPosition(double, double, double);
  EntityPosition();
  ~EntityPosition();

 public:
  [[nodiscard]] Vector3i getBlockPosition() const;
  [[nodiscard]] Vector3f getDirectionVector() const;
  void setPosition(const EntityPosition&);
  void setRotation(const EntityPosition&);
  EntityPosition& operator=(const EntityPosition&);

 public:
  double x, y, z;
  float yaw, pitch;
};

class Location : public EntityPosition {
 public:
  Location();
  Location(Dimension*, const EntityPosition&);
  ~Location();

 public:
  Location& operator=(const Location& to);

 public:
  Dimension* dimension = nullptr;
};