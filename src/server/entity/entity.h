#pragma once

int createEntityID();

class Entity {
public:
    Entity();
    explicit Entity(int);
    ~Entity();

public:
    int getEID() const;

private:
    int eid;

};