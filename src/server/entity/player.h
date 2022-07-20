#pragma once

#include "entity.h"
#include "../../connection_context.h"

// TODO: More entites (Metadata)

class EntityPlayer : public Entity {
public:
    EntityPlayer();
    ~EntityPlayer();

public:
    ConnectionContext* connection = nullptr;

};