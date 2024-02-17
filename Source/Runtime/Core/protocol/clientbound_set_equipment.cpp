

#include "clientbound_set_equipment.h"

ClientboundSetEquipment::ClientboundSetEquipment() = default;
ClientboundSetEquipment::~ClientboundSetEquipment() = default;

void ClientboundSetEquipment::write(ByteBuffer& buf) {
  buf.writeVarInt(entity->getEID());

  auto it = equipment.begin();
  while (it != equipment.end()) {
    uint8_t slot = it->first;
    ItemStack is = it->second;

    it++;
    if (it != equipment.end()) {
      slot |= 1 << 7;
    }

    buf.writeByte(slot);
    buf.writeItemStack(is);
  }
}

int ClientboundSetEquipment::getPacketID() const {
  return 0x53;
}

void ClientboundSetEquipment::addAll(PlayerInventory& inventory) {
  equipment[HELMET] = inventory.getHelmet();
  equipment[CHESTPLATE] = inventory.getChestplate();
  equipment[LEGGINGS] = inventory.getLeggings();
  equipment[BOOTS] = inventory.getBoots();
  equipment[MAIN_HAND] = inventory.getActiveSlotData();
  equipment[OFF_HAND] = inventory.getOffHandItem();
}

void ClientboundSetEquipment::addAll(EntityPlayer* player) {
  entity = player;
  addAll(player->getInventory());
}