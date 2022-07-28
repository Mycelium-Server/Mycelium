#pragma once

#include "../NBT.h"

class ItemStack {
public:
    ItemStack(int, unsigned char);
    ItemStack();
    ~ItemStack();

public:
    bool present = false;
    int itemID = 0; // TODO: Item enum/class/struct
    unsigned char itemCount = 0;
    std::optional<std::shared_ptr<NBT_Component>> nbt {};

};