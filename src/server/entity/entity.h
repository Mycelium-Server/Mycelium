#pragma once

#include <optional>
#include <string>

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

private:
    int eid;
    std::optional<std::string> displayName;

};