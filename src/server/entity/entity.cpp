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

Entity::~Entity() {

}

int Entity::getEID() {
    return eid;
}