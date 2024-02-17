#pragma once

#include "../connection_context.h"
#include "../protocol/serverbound_encryption_response.h"
#include "../protocol/serverbound_login_start.h"

class LoginPacketListener {
 public:
  LoginPacketListener();
  ~LoginPacketListener();

 public:
  void handleLoginStart(ConnectionContext*, ServerboundLoginStart*);
  void handleEncryptionResponse(ConnectionContext*, ServerboundEncryptionResponse*);
  std::string createHash();

 private:
  uint8_t verifyToken[4];
  ByteBuffer sharedSecret;
  ByteBuffer publicKey;
};