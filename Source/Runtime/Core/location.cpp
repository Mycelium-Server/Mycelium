

#include "location.h"
#include "server/dimension.h"

EntityPosition::EntityPosition(double x, double y, double z, float yaw, float pitch)
    : x(x),
      y(y),
      z(z),
      yaw(yaw),
      pitch(pitch) {}

EntityPosition::EntityPosition(double x, double y, double z)
    : EntityPosition(x, y, z, 0.f, 0.f) {}
EntityPosition::EntityPosition()
    : EntityPosition(0, 0, 0) {}
EntityPosition::~EntityPosition() = default;

Vector3i EntityPosition::getBlockPosition() const {
  return {(int) std::floor(x),
          (int) std::floor(y),
          (int) std::floor(z)};
}

Vector3f EntityPosition::getDirectionVector() const {
  float rx = -std::cos(pitch) * std::sin(yaw);
  float ry = -std::sin(pitch);
  float rz = std::cos(pitch) * std::cos(yaw);
  return {rx, ry, rz};
}

void EntityPosition::setPosition(const EntityPosition& to) {
  x = to.x;
  y = to.y;
  z = to.z;
}

void EntityPosition::setRotation(const EntityPosition& to) {
  yaw = to.yaw;
  pitch = to.pitch;
}

EntityPosition& EntityPosition::operator=(const EntityPosition& to) {
  if (this == &to) {
    return *this;
  }

  setPosition(to);
  setRotation(to);

  return *this;
}

Location::Location(Dimension* dim, const EntityPosition& pos)
    : EntityPosition(pos),
      dimension(dim) {}
Location::Location()
    : EntityPosition() {}
Location::~Location() = default;

Location& Location::operator=(const Location& to) {
  if (this == &to) {
    return *this;
  }

  setPosition(to);
  setRotation(to);
  dimension = to.dimension;

  return *this;
}