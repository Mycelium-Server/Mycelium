

#include "clientbound_commands.h"

#include "../server/command/command_graph.h"

ClientboundCommands::ClientboundCommands() = default;
ClientboundCommands::~ClientboundCommands() = default;

void ClientboundCommands::write(ByteBuffer& buf) {
  buf.writeVarInt((int) graph->size());
  for (CommandNode* node : *graph) {
    node->write(buf);
  }
  buf.writeVarInt(root->getIndex());
}

int ClientboundCommands::getPacketID() const {
  return 0x0F;
}
