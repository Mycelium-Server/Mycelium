#pragma once

#include <optional>
#include <string>
#include "../location.h"

int createEntityID();

class Entity {
public:
    Entity();
    explicit Entity(int);
    ~Entity();

public:
    [[nodiscard]] int getEID() const;
    void setDisplayName(const std::string&);
    std::optional<std::string> getDisplayName();
    void setLocation(const Location&);
    Location& getLocation();

private:
    int eid;
    std::optional<std::string> displayName;
    Location location;

};