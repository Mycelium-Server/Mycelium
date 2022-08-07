#include "entity.h"

static int eidCounter;

int createEntityID() {
  return eidCounter++;
}

Entity::Entity()
    : Entity(createEntityID()) {
}

Entity::Entity(int eid)
    : eid(eid) {
}

Entity::~Entity() = default;

int Entity::getEID() const {
  return eid;
}

void Entity::setDisplayName(const std::string& name) {
  displayName = {name};
}

std::optional<std::string> Entity::getDisplayName() {
  return displayName;
}

void Entity::setLocation(const Location& l) {
  location = l;
}

Location& Entity::getLocation() {
  return location;
}

void Entity::setOnGround(bool value) {
  onGround = value;
}

bool Entity::isOnGround() const {
  return onGround;
}
