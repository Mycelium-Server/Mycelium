#include "itemstack.h"

ItemStack::ItemStack(int id, unsigned char count)
    : present(true), itemID(id), itemCount(count) {}

ItemStack::ItemStack() = default;
ItemStack::~ItemStack() = default;
