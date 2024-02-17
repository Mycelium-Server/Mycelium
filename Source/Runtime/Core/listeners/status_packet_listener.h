#pragma once

#include "../connection_context.h"
#include "../network/protocol/serverbound_ping_request.h"
#include "../network/protocol/serverbound_status_request.h"

class StatusPacketListener {
 public:
  StatusPacketListener();
  ~StatusPacketListener();

 public:
  void handleStatusRequest(ConnectionContext*, ServerboundStatusRequest*);
  void handlePingRequest(ConnectionContext*, ServerboundPingRequest*);
};