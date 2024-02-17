#pragma once

#include <optional>
#include <string>

#include "../location.h"
#include "metadata/entity_metadata.h"

int createEntityID();

class Entity {
 public:
  Entity();
  explicit Entity(int);
  ~Entity();

 protected:
  explicit Entity(EntityMetadata* metadata);
  Entity(int, EntityMetadata* metadata);

 public:
  [[nodiscard]] int getEID() const;
  void setDisplayName(const std::string&);
  std::optional<std::string> getDisplayName();
  void setLocation(const Location&);
  Location& getLocation();
  [[nodiscard]] bool isOnGround() const;
  void setOnGround(bool);

  template <typename T = EntityMetadata>
  [[nodiscard]] T* getMetadata() const {
    return (T*) metadata;
  }

 public:
  Location location;
  AbstractEntityMetadata* metadata;

 private:
  bool onGround = false;
  int eid;
  std::optional<std::string> displayName;
};