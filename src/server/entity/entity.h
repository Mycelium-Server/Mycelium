#pragma once

int createEntityID();

class Entity {
public:
    Entity();
    Entity(int);
    ~Entity();

public:
    int getEID();

private:
    int eid;

};