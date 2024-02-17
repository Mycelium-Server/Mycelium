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