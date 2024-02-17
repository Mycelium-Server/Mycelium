#pragma once

#include "../../server/gamemode.h"
#include "packet.h"
#include "signature_data.h"

class ClientboundPlayerInfo : public ClientboundPacket {
 public:
  ClientboundPlayerInfo();
  ~ClientboundPlayerInfo();

 public:
  void write(ByteBuffer&) override;
  [[nodiscard]] int getPacketID() const override;

 public:
  class PlayerAction {
   public:
    explicit PlayerAction(const uuids::uuid&);
    explicit PlayerAction(const PlayerData&);
    virtual ~PlayerAction();

   public:
    [[nodiscard]] virtual int getID() const = 0;
    virtual void write(ByteBuffer&) = 0;

   public:
    uuids::uuid uuid;
  };

  class AddPlayerAction : public PlayerAction {
   public:

   public:
    explicit AddPlayerAction(const uuids::uuid&);
    explicit AddPlayerAction(const PlayerData&);
    AddPlayerAction(const PlayerData&, const std::vector<MojangAPI::ProfileProperty>&);
    ~AddPlayerAction() override;

   public:
    [[nodiscard]] int getID() const override;
    void write(ByteBuffer&) override;
    void construct(const PlayerData&, const std::vector<MojangAPI::ProfileProperty>&);

   public:
    std::string name;
    std::vector<MojangAPI::ProfileProperty> properties;
    Gamemode gamemode = (Gamemode) 0;
    int ping = 0;
    std::optional<std::string> displayName;
    std::optional<SigData> sigData;
  };

  class UpdatePlayerGamemode : public PlayerAction {
   public:
    explicit UpdatePlayerGamemode(const uuids::uuid&);
    explicit UpdatePlayerGamemode(const PlayerData&);
    UpdatePlayerGamemode(const uuids::uuid&, const Gamemode&);
    ~UpdatePlayerGamemode() override;

   public:
    [[nodiscard]] int getID() const override;
    void write(ByteBuffer&) override;

   public:
    Gamemode gamemode = (Gamemode) 0;
  };

  class UpdatePlayerLatency : public PlayerAction {
   public:
    explicit UpdatePlayerLatency(const uuids::uuid&);
    explicit UpdatePlayerLatency(const PlayerData&);
    UpdatePlayerLatency(const uuids::uuid&, int);
    ~UpdatePlayerLatency() override;

   public:
    [[nodiscard]] int getID() const override;
    void write(ByteBuffer&) override;

   public:
    int ping = 0;
  };

  class UpdatePlayerDisplayName : public PlayerAction {
   public:
    explicit UpdatePlayerDisplayName(const uuids::uuid&);
    explicit UpdatePlayerDisplayName(const uuids::uuid&, std::optional<std::string> = {});
    explicit UpdatePlayerDisplayName(const PlayerData&);
    ~UpdatePlayerDisplayName() override;

   public:
    [[nodiscard]] int getID() const override;
    void write(ByteBuffer&) override;

   public:
    std::optional<std::string> displayName;
  };

  class RemovePlayerAction : public PlayerAction {
   public:
    explicit RemovePlayerAction(const uuids::uuid&);
    explicit RemovePlayerAction(const PlayerData&);
    ~RemovePlayerAction() override;

   public:
    [[nodiscard]] int getID() const override;
    void write(ByteBuffer&) override;
  };

  std::vector<PlayerAction*> playerActions;
};