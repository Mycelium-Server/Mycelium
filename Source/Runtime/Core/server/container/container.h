#pragma once

#include <cassert>

#include "../itemstack.h"

class AbstractContainer {
 public:
  AbstractContainer();
  virtual ~AbstractContainer();

 public:
  virtual ItemStack& get(uint32_t) = 0;
  virtual ItemStack set(uint32_t, ItemStack) = 0;
  [[nodiscard]] virtual uint32_t getSize() const = 0;
  [[nodiscard]] virtual int getID() const = 0;
};

template<uint32_t size, int id>
class Container : public AbstractContainer {
 public:
  Container() = default;
  ~Container() override = default;

 public:
  ItemStack& get(uint32_t n) override {
    assert(n < size);
    return slots[n];
  }

  ItemStack set(uint32_t n, ItemStack value) override {
    assert(n < size);
    std::swap(value, slots[n]);
    return value;
  }

  [[nodiscard]] uint32_t getSize() const override {
    return size;
  }

  [[nodiscard]] int getID() const override {
    return id;
  }

 public:
  ItemStack operator[](uint32_t n) const {
    assert(n < size);
    return slots[n];
  }

  ItemStack& operator[](uint32_t n) {
    return get(n);
  }

 public:
  std::array<ItemStack, size> slots {};
};

typedef Container<46, 0> PlayerInventoryContainer;

typedef Container<9, 0> Generic9x1Container;
typedef Container<18, 1> Generic9x2Container;
typedef Container<27, 2> Generic9x3Container;
typedef Container<36, 3> Generic9x4Container;
typedef Container<45, 4> Generic9x5Container;
typedef Container<54, 5> Generic9x6Container;
typedef Container<9, 6> Generic3x3Container;
typedef Container<3, 7> AnvilContainer;
typedef Container<1, 8> BeaconContainer;
typedef Container<3, 9> BlastFurnaceContainer;
typedef Container<5, 10> BrewingStandContainer;
typedef Container<10, 11> CraftingContainer;
typedef Container<2, 12> EnchantmentContainer;
typedef Container<3, 13> FurnaceContainer;
typedef Container<3, 14> GrindstoneContainer;
typedef Container<5, 15> HopperContainer;
typedef Container<1, 16> LecternContainer;
typedef Container<4, 17> LoomContainer;
typedef Container<3, 18> MerchantContainer;
typedef Container<27, 19> ShulkerBoxContainer;
typedef Container<3, 20> SmithingContainer;
typedef Container<3, 21> SmokerContainer;
typedef Container<3, 22> CartographyContainer;
typedef Container<2, 23> StonecutterContainer;
