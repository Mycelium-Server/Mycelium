#ifndef MYCELIUM_PARTICLE_H
#define MYCELIUM_PARTICLE_H

#include <memory>
#include <utility>
#include "ByteBuffer.h"
#include "Slot.h"

class BaseParticle {
public:
    BaseParticle() = default;

public:
    virtual void encode(ByteBuffer& buf) = 0;
    virtual int getID() = 0;
    virtual std::string getParticleName() = 0;

};

class ParticleAmbientEntityEffect : public BaseParticle {
public:
    int getID() override {
        return 0;
    }

    std::string getParticleName() override {
        return "minecraft:ambient_entity_effect";
    }

    void encode(ByteBuffer &buf) override {}

};

class ParticleAngryVillager : public BaseParticle {
public:
    int getID() override {
        return 1;
    }

    std::string getParticleName() override {
        return "minecraft:angry_villager";
    }

    void encode(ByteBuffer &buf) override {}

};

class ParticleBlock : public BaseParticle {
public:
    int getID() override {
        return 2;
    }

    std::string getParticleName() override {
        return "minecraft:block";
    }

    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(block_state);
    }

public:
    int block_state = 0;

};

class ParticleBlockMarker : public BaseParticle {
public:
    int getID() override {
        return 3;
    }

    std::string getParticleName() override {
        return "minecraft:block_marker";
    }

    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(block_state);
    }

public:
    int block_state = 0;

};

class ParticleBubble : public BaseParticle {
public:
    int getID() override {
        return 4;
    }

    std::string getParticleName() override {
        return "minecraft:bubble";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleCloud : public BaseParticle {
public:
    int getID() override {
        return 5;
    }

    std::string getParticleName() override {
        return "minecraft:cloud";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleCrit : public BaseParticle {
public:
    int getID() override {
        return 6;
    }

    std::string getParticleName() override {
        return "minecraft:crit";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleDamageIndicator : public BaseParticle {
public:
    int getID() override {
        return 7;
    }

    std::string getParticleName() override {
        return "minecraft:damage_indicator";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleDragonBreath : public BaseParticle {
public:
    int getID() override {
        return 8;
    }

    std::string getParticleName() override {
        return "minecraft:dragon_breath";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleDrippingLava : public BaseParticle {
public:
    int getID() override {
        return 9;
    }

    std::string getParticleName() override {
        return "minecraft:dripping_lava";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFallingLava : public BaseParticle {
public:
    int getID() override {
        return 10;
    }

    std::string getParticleName() override {
        return "minecraft:falling_lava";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleLandingLava : public BaseParticle {
public:
    int getID() override {
        return 11;
    }

    std::string getParticleName() override {
        return "minecraft:landing_lava";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleDrippingWater : public BaseParticle {
public:
    int getID() override {
        return 12;
    }

    std::string getParticleName() override {
        return "minecraft:dripping_water";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFallingWater : public BaseParticle {
public:
    int getID() override {
        return 13;
    }

    std::string getParticleName() override {
        return "minecraft:falling_water";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleDust : public BaseParticle {
public:
    int getID() override {
        return 14;
    }

    std::string getParticleName() override {
        return "minecraft:dust";
    }

    void encode(ByteBuffer &buf) override {
        buf.writeFloat(red);
        buf.writeFloat(green);
        buf.writeFloat(blue);
        buf.writeFloat(scale);
    }

public:
    float red = 0;
    float green = 0;
    float blue = 0;
    float scale = 0;

};

class ParticleDustColorTransition : public BaseParticle {
public:
    int getID() override {
        return 15;
    }

    std::string getParticleName() override {
        return "minecraft:dust_color_transition";
    }

    void encode(ByteBuffer &buf) override {
        buf.writeFloat(from_red);
        buf.writeFloat(from_green);
        buf.writeFloat(from_blue);
        buf.writeFloat(scale);
        buf.writeFloat(to_red);
        buf.writeFloat(to_green);
        buf.writeFloat(to_blue);
    }

public:
    float from_red = 0, from_green = 0, from_blue = 0;
    float scale = 0;
    float to_red = 0, to_green = 0, to_blue = 0;

};

class ParticleEffect : public BaseParticle {
public:
    int getID() override {
        return 16;
    }

    std::string getParticleName() override {
        return "minecraft:effect";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleElderGuardian : public BaseParticle {
public:
    int getID() override {
        return 17;
    }

    std::string getParticleName() override {
        return "minecraft:elder_guardian";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleEnchantedHit : public BaseParticle {
public:
    int getID() override {
        return 18;
    }

    std::string getParticleName() override {
        return "minecraft:enchanted_hit";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleEnchant : public BaseParticle {
public:
    int getID() override {
        return 19;
    }

    std::string getParticleName() override {
        return "minecraft:enchant";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleEndRod : public BaseParticle {
public:
    int getID() override {
        return 20;
    }

    std::string getParticleName() override {
        return "minecraft:end_rod";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleEntityEffect : public BaseParticle {
public:
    int getID() override {
        return 21;
    }

    std::string getParticleName() override {
        return "minecraft:entity_effect";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleExplosionEmitter : public BaseParticle {
public:
    int getID() override {
        return 22;
    }

    std::string getParticleName() override {
        return "minecraft:explosion_emitter";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleExplosion : public BaseParticle {
public:
    int getID() override {
        return 23;
    }

    std::string getParticleName() override {
        return "minecraft:explosion";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFallingDust : public BaseParticle {
public:
    int getID() override {
        return 24;
    }

    std::string getParticleName() override {
        return "minecraft:falling_dust";
    }

    void encode(ByteBuffer &buf) override {
        buf.writeVarInt(block_state);
    }

public:
    int block_state = 0;

};

class ParticleFirwork : public BaseParticle {
public:
    int getID() override {
        return 25;
    }

    std::string getParticleName() override {
        return "minecraft:firework";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFishing : public BaseParticle {
public:
    int getID() override {
        return 26;
    }

    std::string getParticleName() override {
        return "minecraft:fishing";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFlame : public BaseParticle {
public:
    int getID() override {
        return 27;
    }

    std::string getParticleName() override {
        return "minecraft:flame";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleSoulFireFlame : public BaseParticle {
public:
    int getID() override {
        return 28;
    }

    std::string getParticleName() override {
        return "minecraft:soul_fire_flame";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleSoul : public BaseParticle {
public:
    int getID() override {
        return 29;
    }

    std::string getParticleName() override {
        return "minecraft:soul";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFlash : public BaseParticle {
public:
    int getID() override {
        return 30;
    }

    std::string getParticleName() override {
        return "minecraft:flash";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleHappyVillager : public BaseParticle {
public:
    int getID() override {
        return 31;
    }

    std::string getParticleName() override {
        return "minecraft:happy_villager";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleComposter : public BaseParticle {
public:
    int getID() override {
        return 32;
    }

    std::string getParticleName() override {
        return "minecraft:composter";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleHeart : public BaseParticle {
public:
    int getID() override {
        return 33;
    }

    std::string getParticleName() override {
        return "minecraft:heart";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleInstantEffect : public BaseParticle {
public:
    int getID() override {
        return 34;
    }

    std::string getParticleName() override {
        return "minecraft:instant_effect";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleItem : public BaseParticle {
public:
    int getID() override {
        return 35;
    }

    std::string getParticleName() override {
        return "minecraft:item";
    }

    void encode(ByteBuffer &buf) override {
        item.encode(buf);
    }

public:
    Slot item;

};

class ParticleVibration : public BaseParticle {
public:
    int getID() override {
        return 36;
    }

    std::string getParticleName() override {
        return "minecraft:vibration";
    }

    void encode(ByteBuffer &buf) override {
        buf.writeLong(origin.l);
        buf.writeString(position_type);
        buf.writeLong(block_position.l);
        buf.writeVarInt(entity_id);
        buf.writeVarInt(ticks);
    }

public:
    Location_t origin;
    std::string position_type;
    Location_t block_position;
    int entity_id = 0;
    int ticks = 0;

};

class ParticleItemSlime : public BaseParticle {
public:
    int getID() override {
        return 37;
    }

    std::string getParticleName() override {
        return "minecraft:item_slime";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleItemSnowball : public BaseParticle {
public:
    int getID() override {
        return 38;
    }

    std::string getParticleName() override {
        return "minecraft:item_snowball";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleLargeSmoke : public BaseParticle {
public:
    int getID() override {
        return 39;
    }

    std::string getParticleName() override {
        return "minecraft:large_smoke";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleLava : public BaseParticle {
public:
    int getID() override {
        return 40;
    }

    std::string getParticleName() override {
        return "minecraft:lava";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleMycelium : public BaseParticle {
public:
    int getID() override {
        return 41;
    }

    std::string getParticleName() override {
        return "minecraft:mycelium";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleNote : public BaseParticle {
public:
    int getID() override {
        return 42;
    }

    std::string getParticleName() override {
        return "minecraft:note";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticlePoof : public BaseParticle {
public:
    int getID() override {
        return 43;
    }

    std::string getParticleName() override {
        return "minecraft:poof";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticlePortal : public BaseParticle {
public:
    int getID() override {
        return 44;
    }

    std::string getParticleName() override {
        return "minecraft:portal";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleRain : public BaseParticle {
public:
    int getID() override {
        return 45;
    }

    std::string getParticleName() override {
        return "minecraft:rain";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleSmoke : public BaseParticle {
public:
    int getID() override {
        return 46;
    }

    std::string getParticleName() override {
        return "minecraft:smoke";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleSneeze : public BaseParticle {
public:
    int getID() override {
        return 47;
    }

    std::string getParticleName() override {
        return "minecraft:sneeze";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleSpit : public BaseParticle {
public:
    int getID() override {
        return 48;
    }

    std::string getParticleName() override {
        return "minecraft:spit";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleSquidInk : public BaseParticle {
public:
    int getID() override {
        return 49;
    }

    std::string getParticleName() override {
        return "minecraft:squid_ink";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleSweepAttack : public BaseParticle {
public:
    int getID() override {
        return 50;
    }

    std::string getParticleName() override {
        return "minecraft:sweep_attack";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleTotemOfUndying : public BaseParticle {
public:
    int getID() override {
        return 51;
    }

    std::string getParticleName() override {
        return "minecraft:totem_of_undying";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleUnderwater : public BaseParticle {
public:
    int getID() override {
        return 52;
    }

    std::string getParticleName() override {
        return "minecraft:underwater";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleSplash : public BaseParticle {
public:
    int getID() override {
        return 53;
    }

    std::string getParticleName() override {
        return "minecraft:splash";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleWitch : public BaseParticle {
public:
    int getID() override {
        return 54;
    }

    std::string getParticleName() override {
        return "minecraft:witch";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleBubblePop: public BaseParticle {
public:
    int getID() override {
        return 55;
    }

    std::string getParticleName() override {
        return "minecraft:bubble_pop";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleCurrentDown : public BaseParticle {
public:
    int getID() override {
        return 56;
    }

    std::string getParticleName() override {
        return "minecraft:current_down";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleBubbleColumnUp : public BaseParticle {
public:
    int getID() override {
        return 57;
    }

    std::string getParticleName() override {
        return "minecraft:bubble_column_up";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleNautilus : public BaseParticle {
public:
    int getID() override {
        return 58;
    }

    std::string getParticleName() override {
        return "minecraft:nautilus";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleDolphin : public BaseParticle {
public:
    int getID() override {
        return 59;
    }

    std::string getParticleName() override {
        return "minecraft:dolphin";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleCampfireCosySmoke : public BaseParticle {
public:
    int getID() override {
        return 60;
    }

    std::string getParticleName() override {
        return "minecraft:campfire_cosy_smoke";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleCampfireSignalSmoke : public BaseParticle {
public:
    int getID() override {
        return 61;
    }

    std::string getParticleName() override {
        return "minecraft:campfire_signal_smoke";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleDrippingHoney : public BaseParticle {
public:
    int getID() override {
        return 62;
    }

    std::string getParticleName() override {
        return "minecraft:dripping_honey";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFallingHoney : public BaseParticle {
public:
    int getID() override {
        return 63;
    }

    std::string getParticleName() override {
        return "minecraft:falling_honey";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleLandingHoney : public BaseParticle {
public:
    int getID() override {
        return 64;
    }

    std::string getParticleName() override {
        return "minecraft:landing_honey";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFallingNectar : public BaseParticle {
public:
    int getID() override {
        return 65;
    }

    std::string getParticleName() override {
        return "minecraft:falling_nectar";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFallingSporeBlossom : public BaseParticle {
public:
    int getID() override {
        return 66;
    }

    std::string getParticleName() override {
        return "minecraft:falling_spore_blossom";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleAsh : public BaseParticle {
public:
    int getID() override {
        return 67;
    }

    std::string getParticleName() override {
        return "minecraft:ash";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleCrimsonSpore : public BaseParticle {
public:
    int getID() override {
        return 68;
    }

    std::string getParticleName() override {
        return "minecraft:crimson_spore";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleWarpedSpore : public BaseParticle {
public:
    int getID() override {
        return 69;
    }

    std::string getParticleName() override {
        return "minecraft:warped_spore";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleSporeBlossomAir : public BaseParticle {
public:
    int getID() override {
        return 70;
    }

    std::string getParticleName() override {
        return "minecraft:spore_blossom_air";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleDrippingObsidianTear : public BaseParticle {
public:
    int getID() override {
        return 71;
    }

    std::string getParticleName() override {
        return "minecraft:dripping_obsidian_tear";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFallingObsidianTear : public BaseParticle {
public:
    int getID() override {
        return 72;
    }

    std::string getParticleName() override {
        return "minecraft:falling_obsidian_tear";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleLandingObsidianTear : public BaseParticle {
public:
    int getID() override {
        return 73;
    }

    std::string getParticleName() override {
        return "minecraft:landing_obsidian_tear";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleReversePortal : public BaseParticle {
public:
    int getID() override {
        return 74;
    }

    std::string getParticleName() override {
        return "minecraft:reverse_portal";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleWhiteAsh : public BaseParticle {
public:
    int getID() override {
        return 75;
    }

    std::string getParticleName() override {
        return "minecraft:white_ash";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleSnowflake : public BaseParticle {
public:
    int getID() override {
        return 77;
    }

    std::string getParticleName() override {
        return "minecraft:snowflake";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleDrippingDripstoneLava : public BaseParticle {
public:
    int getID() override {
        return 78;
    }

    std::string getParticleName() override {
        return "minecraft:dripping_dripstone_lava";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFallingDripstoneLava : public BaseParticle {
public:
    int getID() override {
        return 79;
    }

    std::string getParticleName() override {
        return "minecraft:falling_dripstone_lava";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleDrippingDripstoneWater : public BaseParticle {
public:
    int getID() override {
        return 80;
    }

    std::string getParticleName() override {
        return "minecraft:dripping_dripstone_water";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleFallingDripstoneWater : public BaseParticle {
public:
    int getID() override {
        return 81;
    }

    std::string getParticleName() override {
        return "minecraft:falling_dripstone_water";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleGlowSquidInk : public BaseParticle {
public:
    int getID() override {
        return 82;
    }

    std::string getParticleName() override {
        return "minecraft:glow_squid_ink";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleGlow : public BaseParticle {
public:
    int getID() override {
        return 83;
    }

    std::string getParticleName() override {
        return "minecraft:glow";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleWaxOn : public BaseParticle {
public:
    int getID() override {
        return 84;
    }

    std::string getParticleName() override {
        return "minecraft:wax_on";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleWaxOff : public BaseParticle {
public:
    int getID() override {
        return 85;
    }

    std::string getParticleName() override {
        return "minecraft:wax_off";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleElectricSpark : public BaseParticle {
public:
    int getID() override {
        return 86;
    }

    std::string getParticleName() override {
        return "minecraft:electric_spark";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class ParticleScrape : public BaseParticle {
public:
    int getID() override {
        return 87;
    }

    std::string getParticleName() override {
        return "minecraft:scrape";
    }

    void encode(ByteBuffer &buf) override {

    }

};

class Particle {
public:
    Particle() = default;
    explicit Particle(std::shared_ptr<BaseParticle> particle) : particle(std::move(particle)) {}

public:
    void encode(ByteBuffer& buf) {
        buf.writeVarInt(particle->getID());
        particle->encode(buf);
    }

public:
    std::shared_ptr<BaseParticle> particle;
};

#endif //MYCELIUM_PARTICLE_H
