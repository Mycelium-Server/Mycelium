

#include "serverbound_player_action.h"

#include "../../listeners/play_packet_listener.h"

ServerboundPlayerAction::ServerboundPlayerAction() = default;
ServerboundPlayerAction::~ServerboundPlayerAction() = default;

void ServerboundPlayerAction::read(ByteBuffer& buf) {
  status = (decltype(status)) buf.readVarInt();
  location = buf.readBlockPosition();
  face = (BlockFace) buf.readByte();
  sequence = buf.readVarInt();
}

ServerboundPacket* ServerboundPlayerAction::createInstance() {
  return new ServerboundPlayerAction;
}

int ServerboundPlayerAction::getPacketID() const {
  return 0x1D;
}

void ServerboundPlayerAction::handle(ConnectionContext* ctx) {
  if (ctx->state == ConnectionState::PLAY) {
    ((PlayPacketListener*) ctx->packetListener)->handlePlayerAction(ctx, this);
  }
  delete this;
}
