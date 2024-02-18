#pragma once

#include "../packet.h"

class ClientboundSetEquipment : public ClientboundPacket {
 public:
  ClientboundSetEquipment();
  ~ClientboundSetEquipment();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;
  void addAll(PlayerInventory&);
  void addAll(EntityPlayer*);

 public:
  enum EquipmentType {
    MAIN_HAND = 0,
    OFF_HAND = 1,
    BOOTS = 2,
    LEGGINGS = 3,
    CHESTPLATE = 4,
    HELMET = 5,
  };

  Entity* entity;
  std::unordered_map<EquipmentType, ItemStack> equipment;

};