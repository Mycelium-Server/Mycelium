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
