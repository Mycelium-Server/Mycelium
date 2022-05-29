#ifndef MYCELIUM_ENTITYMETADATA_H
#define MYCELIUM_ENTITYMETADATA_H

#include "ByteBuffer.h"
#include "Particle.h"

struct EMD_OptChat_ {
    bool is_present = false;
    std::string value;
};

struct EMD_OptPosition_ {
    bool is_present = false;
    Location_t value;
};

struct EMD_OptUUID_ {
    bool is_present = false;
    UUID_t value;
};

struct EMD_OptVarInt_ {
    bool is_present = false;
    int value = 0;
};

enum EMD_Pose_ {
    POSE_STANDING = 0,
    POSE_FALL_FLYING = 1,
    POSE_SLEEPING = 2,
    POSE_SWIMMING = 3,
    POSE_SPIN_ATTACK = 4,
    POSE_SNEAKING = 5,
    POSE_LONG_JUMPING = 6,
    POSE_DYING = 7
};

struct EMD_VillagerData_ {
    int villager_type;
    int villager_profession;
    int level;
};

enum EMD_VillagerType_ {
    MINECRAFT_DESERT = 0,
    MINECRAFT_JUNGLE = 1,
    MINECRAFT_PLAINS = 2,
    MINECRAFT_SAVANNA = 3,
    MINECRAFT_SNOW = 4,
    MINECRAFT_SWAMP = 5,
    MINECRAFT_TAIGA = 6
};

enum EMD_VillagerProfession_ {
    MINECRAFT_NONE = 0,
    MINECRAFT_ARMORER = 1,
    MINECRAFT_BUTCHER = 2,
    MINECRAFT_CARTOGRAPHER = 3,
    MINECRAFT_CLERIC = 4,
    MINECRAFT_FARMER = 5,
    MINECRAFT_FISHERMAN = 6,
    MINECRAFT_FLETCHER = 7,
    MINECRAFT_LEATHERWORKER = 8,
    MINECRAFT_LIBRARIAN = 9,
    MINECRAFT_MASON = 10,
    MINECRAFT_NITWIT = 11,
    MINECRAFT_SHEPHERD = 12,
    MINECRAFT_TOOLSMITH = 13,
    MINECRAFT_WEAPONSMITH = 14
};

enum EMD_Direction_ {
    DIRECTION_DOWN = 0,
    DIRECTION_UP = 1,
    DIRECTION_NORTH = 2,
    DIRECTION_SOUTH = 3,
    DIRECTION_WEST = 4,
    DIRECTION_EAST = 5
};

struct EMD_Rotation_ {
    float x = 0, y = 0, z = 0;
};

typedef int EMD_OptBlockID_;

#define EMD_WriteByte_(dst, i, x)                dst.writeByte((i)); dst.writeVarInt(0); dst.writeByte((byte_t)((x)));
#define EMD_WriteVarInt_(dst, i, x)              dst.writeByte((i)); dst.writeVarInt(1); dst.writeVarInt((x));
#define EMD_WriteFloat_(dst, i, x)               dst.writeByte((i)); dst.writeVarInt(2); dst.writeFloat((x));
#define EMD_WriteString_(dst, i, x)              dst.writeByte((i)); dst.writeVarInt(3); dst.writeString((x));
#define EMD_WriteChat_(dst, i, x)                dst.writeByte((i)); dst.writeVarInt(4); dst.writeString((x));
#define EMD_WriteOptChat_(dst, i, x)             dst.writeByte((i)); dst.writeVarInt(5); dst.writeBoolean((x).is_present); if((x).is_present) { dst.writeString((x).value); }
#define EMD_WriteSlot_(dst, i, x)                dst.writeByte((i)); dst.writeVarInt(6); (x).encode(dst);
#define EMD_WriteBoolean_(dst, i, x)             dst.writeByte((i)); dst.writeVarInt(7); dst.writeBoolean((x));
#define EMD_WriteRotation_(dst, i, r)            dst.writeByte((i)); dst.writeVarInt(8); dst.writeFloat((r).x); dst.writeFloat((r).y); dst.writeFloat((r).z);
#define EMD_WritePosition_(dst, i, x)            dst.writeByte((i)); dst.writeVarInt(9); dst.writeLong((x).l);
#define EMD_WriteOptPosition_(dst, i, x)         dst.writeByte((i)); dst.writeVarInt(10); dst.writeBoolean((x).is_present); if((x).is_present) { dst.writeLong((x).value.l); }
#define EMD_WriteDirection_(dst, i, x)           dst.writeByte((i)); dst.writeVarInt(11); dst.writeVarInt((int)((x)));
#define EMD_WriteOptUUID_(dst, i, x)             dst.writeByte((i)); dst.writeVarInt(12); dst.writeBoolean((x).is_present); if((x).is_present) { dst.writeUUID((x).value); }
#define EMD_WriteOptBlockID_(dst, i, x)          dst.writeByte((i)); dst.writeVarInt(13); dst.writeVarInt((int)((x)));
#define EMD_WriteNBT_(dst, i, x)                 dst.writeByte((i)); dst.writeVarInt(14); { ByteBuffer tmp = (x).asByteBuffer(); dst.writeByteBuffer(tmp); }
#define EMD_WriteNBT_PTR_(dst, i, x)             dst.writeByte((i)); dst.writeVarInt(14); { ByteBuffer tmp = (x)->asByteBuffer(); dst.writeByteBuffer(tmp); }
#define EMD_WriteParticle_(dst, i, x)            dst.writeByte((i)); dst.writeVarInt(15); (x).encode(dst);
#define EMD_WriteVillagerData_(dst, i, x)        dst.writeByte((i)); dst.writeVarInt(16); dst.writeVarInt((x).villager_type); dst.writeVarInt((x).villager_profession); dst.writeVarInt((x).level);
#define EMD_WriteOptVarInt_(dst, i, x)           dst.writeByte((i)); dst.writeVarInt(17); dst.writeVarInt((x).is_present? 1+(x).value : 0);
#define EMD_WritePose_(dst, i, x)                dst.writeByte((i)); dst.writeVarInt(18); dst.writeVarInt((int)((x)));
#define EMD_WriteEnd_(dst)                       dst.writeByte(0xff);

class EntityMetadata {
public:
    virtual void encode(ByteBuffer& buf) {
        EMD_WriteByte_(buf, 0, bitfield.value)
        EMD_WriteVarInt_(buf, 1, air_ticks)
        EMD_WriteOptChat_(buf, 2, custom_name)
        EMD_WriteBoolean_(buf, 3, is_custom_name_visible)
        EMD_WriteBoolean_(buf, 4, is_silent)
        EMD_WriteBoolean_(buf, 5, has_no_gravity)
        EMD_WritePose_(buf, 6, pose)
        EMD_WriteVarInt_(buf, 7, ticks_frozen_in_powdered_snow)
    }

public:
    union {
        struct {
            uint8_t is_on_fire : 1;
            uint8_t is_crouching : 1;
            uint8_t unused : 1;
            uint8_t is_sprinting : 1;
            uint8_t is_swimming : 1;
            uint8_t is_invisible : 1;
            uint8_t has_glowing_effect : 1;
            uint8_t if_flying_with_an_elytra : 1;
        };
        uint8_t value = 0;
    } bitfield{}; // Byte
    int air_ticks = 300; // VarInt
    EMD_OptChat_ custom_name; // OptChat
    bool is_custom_name_visible = false; // Boolean
    bool is_silent = false; // Boolean
    bool has_no_gravity = false; // Boolean
    EMD_Pose_ pose = POSE_STANDING; // Pose
    int ticks_frozen_in_powdered_snow = 0; // VarInt

};

class ThrownEggMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer& buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, item)
    }

public:
    Slot item;

};

class ThrownEnderPearlMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer& buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, item)
    }

public:
    Slot item;

};

class ThrownExperienceBottleMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer& buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, item)
    }

public:
    Slot item;

};

class ThrownPotionMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer& buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, potion_which_is_thrown)
    }

public:
    Slot potion_which_is_thrown;

};

class SnowballMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer& buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, item)
    }

public:
    Slot item;

};

class EyeOfEnderMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer& buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, item)
    }

public:
    Slot item;

};

class FallingBlockMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WritePosition_(buf, 8, spawn_position)
    }

public:
    Location_t spawn_position{0,0,0};

};

class AreaEffectCloudMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteFloat_(buf, 8, radius)
        EMD_WriteVarInt_(buf, 9, color)
        EMD_WriteBoolean_(buf, 10, ignore_radius_and_show_effect_as_single_point_not_area)
        EMD_WriteParticle_(buf, 11, particle)
    }

public:
    float radius = 0.5f;
    int color = 0;
    bool ignore_radius_and_show_effect_as_single_point_not_area = false;
    Particle particle = Particle(std::make_shared<ParticleEffect>());

};

class FishingHookMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 8, hooked_entity_id_plus_one_or_zero_if_there_is_no_hooked_entity);
        EMD_WriteBoolean_(buf, 9, is_catchable)
    }

public:
    int hooked_entity_id_plus_one_or_zero_if_there_is_no_hooked_entity = 0;
    bool is_catchable = false;

};

class AbstractArrowMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteByte_(buf, 8, bitfield.value)
        EMD_WriteByte_(buf, 9, piercing_level)
    }

public:
    union {
        struct {
            uint8_t is_critical : 1;
            uint8_t is_noclip : 1;
            uint8_t unused : 6;
        };
        uint8_t value = 0;
    } bitfield{};
    byte_t piercing_level = 0;

};

class ArrowMetadata : public AbstractArrowMetadata {
public:
    void encode(ByteBuffer& buf) override {
        AbstractArrowMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 10, color)
    }

public:
    int color = 01;

};

class SpectralArrowMetadata : public AbstractArrowMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractArrowMetadata::encode(buf);
    }
};

class ThrownTridentMetadata : public AbstractArrowMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractArrowMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 10, loyalty_level)
        EMD_WriteBoolean_(buf, 11, has_enchantment_glint)
    }

public:
    int loyalty_level = 0;
    bool has_enchantment_glint = false;

};

class BoatMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 8, time_since_last_hit)
        EMD_WriteVarInt_(buf, 9, forward_direction)
        EMD_WriteFloat_(buf, 10, damage_taken)
        EMD_WriteVarInt_(buf, 11, type)
        EMD_WriteBoolean_(buf, 12, is_left_paddle_turning)
        EMD_WriteBoolean_(buf, 13, is_right_paddle_turning)
        EMD_WriteVarInt_(buf, 14, splash_timer)
    }

public:
    int time_since_last_hit = 0;
    int forward_direction = 1;
    float damage_taken = 0;
    int type = 0;
    bool is_left_paddle_turning = false;
    bool is_right_paddle_turning = false;
    int splash_timer = 0;

    enum Type {
        OAK = 0,
        SPRUCE = 1,
        BIRCH = 2,
        JUNGLE = 3,
        ACACIA = 4,
        DARK_OAK = 5
    };

};

class EndCrystalMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteOptPosition_(buf, 8, beam_target)
        EMD_WriteBoolean_(buf, 9, show_bottom)
    }

public:
    EMD_OptPosition_ beam_target;
    bool show_bottom = true;

};

class DragonFireballMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
    }
};

class SmallFireballMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, item)
    }

public:
    Slot item;

};

class FireballMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, item)
    }

public:
    Slot item;

};

class WitherSkullMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 8, is_invulnerable)
    }

public:
    bool is_invulnerable = false;

};

class FireworkRocketEntityMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, firework_info)
        EMD_WriteOptVarInt_(buf, 9, entity_id_of_entity_which_used_firework_for_elytra_boosting)
        EMD_WriteBoolean_(buf, 10, is_shot_at_angle_from_a_crossbow)
    }

public:
    Slot firework_info;
    EMD_OptVarInt_ entity_id_of_entity_which_used_firework_for_elytra_boosting;
    bool is_shot_at_angle_from_a_crossbow = false;

};

class ItemFrameMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, item)
        EMD_WriteVarInt_(buf, 9, rotation)
    }

public:
    Slot item;
    int rotation = 0;

};

class ItemEntityMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteSlot_(buf, 8, item)
    }

public:
    Slot item;

};

class LivingEntityMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteByte_(buf, 8, hand_states.value)
        EMD_WriteFloat_(buf, 9, health)
        EMD_WriteVarInt_(buf, 10, potion_effect_color)
        EMD_WriteBoolean_(buf, 11, is_potion_effect_ambient)
        EMD_WriteVarInt_(buf, 12, number_of_arrows_in_entity)
        EMD_WriteVarInt_(buf, 13, number_of_bee_stingers_in_entity)
        EMD_WriteOptPosition_(buf, 14, location_of_the_bed_that_the_entity_is_currently_sleeping_in)
    }

public:
    union {
        struct {
            uint8_t is_hand_active : 1;
            uint8_t active_hand : 1;
            uint8_t is_in_riptide_spin_attack : 1;
            uint8_t unused : 5;
        };
        uint8_t value = 0;
    } hand_states{};
    float health = 1;
    int potion_effect_color = 0;
    bool is_potion_effect_ambient = false;
    int number_of_arrows_in_entity = 0;
    int number_of_bee_stingers_in_entity = 0;
    EMD_OptPosition_ location_of_the_bed_that_the_entity_is_currently_sleeping_in;

};

class PlayerMetadata : public LivingEntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        LivingEntityMetadata::encode(buf);
        EMD_WriteFloat_(buf, 15, additional_hearts)
        EMD_WriteVarInt_(buf, 16, score)
        EMD_WriteByte_(buf, 17, displayed_skin_parts.value)
        EMD_WriteByte_(buf, 18, main_hand)
        EMD_WriteNBT_PTR_(buf, 19, left_shoulder_entity_data)
        EMD_WriteNBT_PTR_(buf, 20, right_shoulder_entity_data)
    }

public:
    float additional_hearts = 0;
    int score = 0;
    union {
        struct {
            uint8_t cape_enabled : 1;
            uint8_t jacket_enabled : 1;
            uint8_t left_sleeve_enabled : 1;
            uint8_t right_sleeve_enabled : 1;
            uint8_t left_pants_leg_enabled : 1;
            uint8_t right_pants_leg_enabled : 1;
            uint8_t hat_enabled : 1;
            uint8_t unused : 1;
        };
        uint8_t value = 0;
    } displayed_skin_parts{};
    byte_t main_hand = 1;
    std::shared_ptr<NBT_Component> left_shoulder_entity_data = std::make_shared<TAG_Empty>();
    std::shared_ptr<NBT_Component> right_shoulder_entity_data = std::make_shared<TAG_Empty>();

};

class ArmorStandMetadata : public LivingEntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        LivingEntityMetadata::encode(buf);
        EMD_WriteByte_(buf, 15, bitfield.value)
        EMD_WriteRotation_(buf, 16, head_rotation)
        EMD_WriteRotation_(buf, 17, body_rotation)
        EMD_WriteRotation_(buf, 18, left_arm_rotation)
        EMD_WriteRotation_(buf, 19, right_arm_rotation)
        EMD_WriteRotation_(buf, 20, left_leg_rotation)
        EMD_WriteRotation_(buf, 21, right_leg_rotation)
    }

public:
    union {
        struct {
            uint8_t is_small : 1;
            uint8_t has_arms : 1;
            uint8_t has_no_baseplate : 1;
            uint8_t is_marker : 1;
            uint8_t unused : 4;
        };
        uint8_t value = 0;
    } bitfield{};
    EMD_Rotation_ head_rotation{0, 0, 0};
    EMD_Rotation_ body_rotation{0, 0, 0};
    EMD_Rotation_ left_arm_rotation{-10, 0, -10};
    EMD_Rotation_ right_arm_rotation{-15, 0, 10};
    EMD_Rotation_ left_leg_rotation{-1, 0, -1};
    EMD_Rotation_ right_leg_rotation{1, 0, 1};

};

class MobMetadata : public LivingEntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        LivingEntityMetadata::encode(buf);
        EMD_WriteByte_(buf, 15, bitfield.value)
    }

public:
    union {
        struct {
            uint8_t no_ai : 1;
            uint8_t is_left_handed : 1;
            uint8_t is_aggressive : 1;
            uint8_t unused : 5;
        };
        uint8_t value;
    } bitfield{};

};

class AmbientCreatureMetadata : public MobMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MobMetadata::encode(buf);
    }
};

class BatMetadata : public AmbientCreatureMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AmbientCreatureMetadata::encode(buf);
        EMD_WriteByte_(buf, 16, is_hanging)
    }

public:
    bool is_hanging = false;

};

class PathfinderMobMetadata : public MobMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MobMetadata::encode(buf);
    }
};

class WaterAnimalMetadata : public PathfinderMobMetadata {
public:
    void encode(ByteBuffer& buf) override {
        PathfinderMobMetadata::encode(buf);
    }
};

class SquidMetadata : public WaterAnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        WaterAnimalMetadata::encode(buf);
    }
};

class DolphinMetadata : public WaterAnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        WaterAnimalMetadata::encode(buf);
        EMD_WritePosition_(buf, 16, treasure_position)
        EMD_WriteBoolean_(buf, 17, has_fish)
        EMD_WriteVarInt_(buf, 18, moisture_level)
    }

public:
    Location_t treasure_position{0, 0, 0};
    bool has_fish = false;
    int moisture_level = 2400;

};

class AbstractFishMetadata : public WaterAnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        WaterAnimalMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 16, from_bucket)
    }

public:
    bool from_bucket = false;

};

class CodMetadata : public AbstractFishMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractFishMetadata::encode(buf);
    }
};

class PufferFishMetadata : public AbstractFishMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractFishMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 17, puff_state)
    }

public:
    int puff_state = 0;

};

class SalmonMetadata : public AbstractFishMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractFishMetadata::encode(buf);
    }
};

class TropicalFishMetadata : public AbstractFishMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractFishMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 17, variant)
    }

public:
    int variant = 0;

};

class AgeableMobMetadata : public PathfinderMobMetadata {
public:
    void encode(ByteBuffer &buf) override {
        PathfinderMobMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 16, is_baby)
    }

public:
    bool is_baby = false;

};

class AnimalMetadata : public AgeableMobMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AgeableMobMetadata::encode(buf);
    }

};

class AbstractHorseMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteByte_(buf, 17, bitfield.value)
        EMD_WriteOptUUID_(buf, 18, owner)
    }

public:
    union {
        struct {
            uint8_t unused1 : 1;
            uint8_t is_tame : 1;
            uint8_t is_saddled : 1;
            uint8_t has_bred : 1;
            uint8_t is_eating : 1;
            uint8_t is_rearing : 1;
            uint8_t is_mouth_open : 1;
            uint8_t unused2 : 1;
        };
        uint8_t value;
    } bitfield{};
    EMD_OptUUID_ owner;

};

class HorseMetadata : public AbstractHorseMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractHorseMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 19, variant)
    }

public:
    int variant = 0;

};

class ZombieHorseMetadata : public AbstractHorseMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractHorseMetadata::encode(buf);
    }
};

class SkeletonHorseMetadata : public AbstractHorseMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractHorseMetadata::encode(buf);
    }
};

class ChestedHorseMetadata : public AbstractHorseMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractHorseMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 19, has_chest)
    }

public:
    bool has_chest = false;

};

class DonkeyMetadata : public ChestedHorseMetadata {
public:
    void encode(ByteBuffer &buf) override {
        ChestedHorseMetadata::encode(buf);
    }
};

class LlamaMetadata : public ChestedHorseMetadata {
public:
    void encode(ByteBuffer &buf) override {
        ChestedHorseMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 20, strength)
        EMD_WriteVarInt_(buf, 21, carpet_color)
        EMD_WriteVarInt_(buf, 22, variant)
    }

public:
    int strength = 0;
    int carpet_color = -1;
    int variant = 0;

};

class TraderLlamaMetadata {};

class MuleMetadata : public ChestedHorseMetadata {
public:
    void encode(ByteBuffer &buf) override {
        ChestedHorseMetadata::encode(buf);
    }
};

class Axolotl : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 17, variant)
        EMD_WriteBoolean_(buf, 18, playing_dead)
        EMD_WriteBoolean_(buf, 19, spawned_from_a_bucket)
    }

public:
    int variant = 0;
    bool playing_dead = false;
    bool spawned_from_a_bucket = false;

};

class BeeMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteByte_(buf, 17, flags.value)
        EMD_WriteVarInt_(buf, 18, anger_time)
    }

public:
    union {
        struct {
            uint8_t unused : 1;
            uint8_t is_angry : 1;
            uint8_t has_stung : 1;
            uint8_t has_nectar : 1;
        };
        uint8_t value = 0;
    } flags{};
    int anger_time = 0;

};

class FoxMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 17, type)
        EMD_WriteByte_(buf, 18, bitfield.value)
        EMD_WriteOptUUID_(buf, 19, first_uuid)
        EMD_WriteOptUUID_(buf, 20, second_uuid)
    }

public:
    int type = 0;
    union {
        struct {
            uint8_t is_sitting : 1;
            uint8_t unused : 1;
            uint8_t is_crouching : 1;
            uint8_t is_interested : 1;
            uint8_t is_pouncing : 1;
            uint8_t is_sleeping : 1;
            uint8_t is_faceplanted : 1;
            uint8_t is_defending : 1;
        };
        uint8_t value = 0;
    } bitfield{};
    EMD_OptUUID_ first_uuid;
    EMD_OptUUID_ second_uuid;

};

class OcelotMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 17, is_trusting)
    }

public:
    bool is_trusting = false;

};

class PandaMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 17, breed_timer)
        EMD_WriteVarInt_(buf, 18, sneeze_timer)
        EMD_WriteVarInt_(buf, 19, eat_timer)
        EMD_WriteByte_(buf, 20, main_gene)
        EMD_WriteByte_(buf, 21, hidden_gene)
        EMD_WriteByte_(buf, 22, bitfield.value)
    }

public:
    int breed_timer = 0;
    int sneeze_timer = 0;
    int eat_timer = 0;
    byte_t main_gene = 0;
    byte_t hidden_gene = 0;
    union {
        struct {
            uint8_t unused : 1;
            uint8_t is_sneezing : 1;
            uint8_t is_rolling : 1;
            uint8_t is_sitting : 1;
            uint8_t is_on_back : 1;
        };
        uint8_t value = 0;
    } bitfield{};

};

class PigMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 17, has_saddle)
        EMD_WriteVarInt_(buf, 18, total_time_to_boost_with_a_carrot_on_a_stick_for)
    }

public:
    bool has_saddle = false;
    int total_time_to_boost_with_a_carrot_on_a_stick_for = 0;

};

class Rabbit : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 17, type)
    }

public:
    int type = 0;

};

class TurtleMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WritePosition_(buf, 17, home_pos)
        EMD_WriteBoolean_(buf, 18, has_egg)
        EMD_WriteBoolean_(buf, 19, is_laying_egg)
        EMD_WritePosition_(buf, 20, travel_pos)
        EMD_WriteBoolean_(buf, 21, is_going_home)
        EMD_WriteBoolean_(buf, 22, is_traveling)
    }

public:
    Location_t home_pos{0, 0, 0};
    bool has_egg = false;
    bool is_laying_egg = false;
    Location_t travel_pos{0, 0, 0};
    bool is_going_home = false;
    bool is_traveling = false;

};

class PolarBearMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 17, is_standing_up)
    }

public:
    bool is_standing_up = false;

};

class ChickenMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
    }
};

class CowMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
    }
};

class HoglinMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 17, is_immune_to_zombification)
    }

public:
    bool is_immune_to_zombification = false;

};

class MooshroomMetadata : public CowMetadata {
public:
    void encode(ByteBuffer &buf) override {
        CowMetadata::encode(buf);
        EMD_WriteString_(buf, 17, variant)
    }

public:
    std::string variant = "red";

};

class SheepMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteByte_(buf, 17, bitfield.value)
    }

public:
    union {
        struct {
            uint8_t color_id : 1;
            uint8_t is_sheared : 1;
        };
        uint8_t value = 0;
    } bitfield{};
};

class StriderMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 17, total_time_to_boost_with_warped_fungus_on_a_stick_for)
        EMD_WriteBoolean_(buf, 18, is_shaking)
        EMD_WriteBoolean_(buf, 19, has_saddle)
    }

public:
    int total_time_to_boost_with_warped_fungus_on_a_stick_for = 0;
    bool is_shaking = false;
    bool has_saddle = false;

};

class TameableAnimalMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteByte_(buf, 17, bitfield.value)
        EMD_WriteOptUUID_(buf, 18, owner)
    }

public:
    union {
        struct {
            uint8_t is_sitting : 1;
            uint8_t unused1 : 1;
            uint8_t is_tamed : 1;
            uint8_t unused2 : 5;
        };
        uint8_t value = 0;
    } bitfield{};
    EMD_OptUUID_ owner;

};

class CatMetadata : public TameableAnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        TameableAnimalMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 19, type)
        EMD_WriteBoolean_(buf, 20, is_lying)
        EMD_WriteBoolean_(buf, 21, is_relaxed)
        EMD_WriteVarInt_(buf, 22, collar_color)
    }

public:
    int type = 1;
    bool is_lying = false;
    bool is_relaxed = false;
    int collar_color = 14;
};

class WolfMetadata : public TameableAnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        TameableAnimalMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 19, is_begging)
        EMD_WriteVarInt_(buf, 20, collar_color)
        EMD_WriteVarInt_(buf, 21, anger_time)
    }

public:
    bool is_begging = false;
    int collar_color = 14;
    int anger_time = 0;

};

class ParrotMetadata : public TameableAnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        TameableAnimalMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 19, variant)
    }

public:
    int variant = 0;

};

class AbstractVillagerMetadata : public AgeableMobMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AgeableMobMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 17, head_shake_timer)
    }

public:
    int head_shake_timer = 0;

};

class VillagerMetadata : public AbstractVillagerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractVillagerMetadata::encode(buf);
        EMD_WriteVillagerData_(buf, 18, villager_data)
    }

public:
    EMD_VillagerData_ villager_data{MINECRAFT_PLAINS, MINECRAFT_NONE, 1};

};

class WanderingTraderMetadata : public AbstractVillagerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractVillagerMetadata::encode(buf);
    }
};

class AbstractGolemMetadata : public PathfinderMobMetadata {
public:
    void encode(ByteBuffer &buf) override {
        PathfinderMobMetadata::encode(buf);
    }
};

class IronGolemMetadata : public AbstractGolemMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractGolemMetadata::encode(buf);
        EMD_WriteByte_(buf, 16, is_player_created)
    }

public:
    bool is_player_created = false;

};

class SnowGolemMetadata : public AbstractGolemMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractGolemMetadata::encode(buf);
        EMD_WriteByte_(buf, 16, bitfield.value)
    }

public:
    union {
        struct {
            uint8_t has_no_pumpkin_hat : 1;
            uint8_t has_pumpkin_hat : 1;
            uint8_t unused : 6;
        };
        uint8_t value;
    } bitfield{};

};

class ShulkerMetadata : public AbstractGolemMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractGolemMetadata::encode(buf);
        EMD_WriteDirection_(buf, 16, attach_face)
        EMD_WriteOptPosition_(buf, 17, attachment_position)
        EMD_WriteByte_(buf, 18, shield_height)
        EMD_WriteByte_(buf, 19, color)
    }

public:
    EMD_Direction_ attach_face = DIRECTION_DOWN;
    EMD_OptPosition_ attachment_position;
    byte_t shield_height = 0;
    byte_t color = 10;
};

class MonsterMetadata : public PathfinderMobMetadata {
public:
    void encode(ByteBuffer &buf) override {
        PathfinderMobMetadata::encode(buf);
    }
};

class BasePiglinMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 16, is_immune_to_zombification)
    }

public:
    bool is_immune_to_zombification = false;

};

class PiglinMetadata : public BasePiglinMetadata {
public:
    void encode(ByteBuffer &buf) override {
        BasePiglinMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 17, is_baby)
        EMD_WriteBoolean_(buf, 18, is_charging_crossbow)
        EMD_WriteBoolean_(buf, 19, is_dancing)
    }

public:
    bool is_baby = false;
    bool is_charging_crossbow = false;
    bool is_dancing = false;

};

class PiglinBruteMetadata : public BasePiglinMetadata {
public:
    void encode(ByteBuffer &buf) override {
        BasePiglinMetadata::encode(buf);
    }
};

class BlazeMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteByte_(buf, 16, is_on_fire)
    }

public:
    bool is_on_fire = false;

};

class CreeperMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 16, state)
        EMD_WriteBoolean_(buf, 17, is_charged)
        EMD_WriteBoolean_(buf, 18, is_ignited)
    }

public:
    int state = -1;
    bool is_charged = false;
    bool is_ignited = false;

};

class EndermiteMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
    }
};

class GiantMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
    }
};

class GoatMetadata : public AnimalMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AnimalMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 17, is_screaming_goat)
    }

public:
    bool is_screaming_goat = false;

};

class GuardianMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 16, is_retracting_spikes)
        EMD_WriteVarInt_(buf, 17, target_eid)
    }

public:
    bool is_retracting_spikes = false;
    int target_eid = 0;

};

class ElderGuardianMetadata : public GuardianMetadata {
public:
    void encode(ByteBuffer &buf) override {
        GuardianMetadata::encode(buf);
    }
};

class SilverfishMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
    }
};

class RaiderMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 16, is_celebrating)
    }

public:
    bool is_celebrating = false;

};

class AbstractIllagerMetadata : public RaiderMetadata {
public:
    void encode(ByteBuffer &buf) override {
        RaiderMetadata::encode(buf);
    }
};

class VindicatorMetadata : public AbstractIllagerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractIllagerMetadata::encode(buf);
    }
};

class PillagerMetadata : public AbstractIllagerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractIllagerMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 17, is_charging)
    }

public:
    bool is_charging = false;
};

class SpellcasterIllagerMetadata : public AbstractIllagerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractIllagerMetadata::encode(buf);
        EMD_WriteByte_(buf, 17, spell)
    }

public:
    byte_t spell = 0;

};

class EvokerMetadata : public SpellcasterIllagerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        SpellcasterIllagerMetadata::encode(buf);
    }
};

class IllusionerMetadata : public SpellcasterIllagerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        SpellcasterIllagerMetadata::encode(buf);
    }
};

class RavagerMetadata : public RaiderMetadata {
public:
    void encode(ByteBuffer &buf) override {
        RaiderMetadata::encode(buf);
    }
};

class WitchMetadata : public RaiderMetadata {
public:
    void encode(ByteBuffer &buf) override {
        RaiderMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 17, is_drinking_potion)
    }

public:
    bool is_drinking_potion = false;

};

class EvokerFangsMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
    }
};

class VexMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteByte_(buf, 17, is_attacking)
    }

public:
    bool is_attacking = false;

};

class AbstractSkeletonMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
    }
};

class SkeletonMetadata : public AbstractSkeletonMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractSkeletonMetadata::encode(buf);
    }
};

class WitherSkeletonMetadata : public AbstractSkeletonMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractSkeletonMetadata::encode(buf);
    }
};

class StrayMetadata : public AbstractSkeletonMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractSkeletonMetadata::encode(buf);
    }
};

class SpiderMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteByte_(buf, 16, is_climbing)
    }

public:
    bool is_climbing = false;

};

class WitherMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 16, center_heads_target_id)
        EMD_WriteVarInt_(buf, 17, left_heads_target_id)
        EMD_WriteVarInt_(buf, 18, right_heads_target_id)
        EMD_WriteVarInt_(buf, 19, invulnerable_time)
    }

public:
    int center_heads_target_id = 0;
    int left_heads_target_id = 0;
    int right_heads_target_id = 0;
    int invulnerable_time = 0;
};

class ZoglinMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 16, is_baby)
    }

public:
    bool is_baby = false;

};

class ZombieMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 16, is_baby)
        EMD_WriteVarInt_(buf, 17, unused)
        EMD_WriteBoolean_(buf, 18, is_becoming_a_drowned)
    }

public:
    bool is_baby = false;
    int unused = 0;
    bool is_becoming_a_drowned = false;

};

class ZombieVillagerMetadata : public ZombieMetadata {
public:
    void encode(ByteBuffer &buf) override {
        ZombieMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 19, is_converting)
        EMD_WriteVillagerData_(buf, 20, villager_data)
    }

public:
    bool is_converting = false;
    EMD_VillagerData_ villager_data{MINECRAFT_PLAINS, MINECRAFT_NONE, 1};

};

class HuskMetadata : public ZombieMetadata {
public:
    void encode(ByteBuffer &buf) override {
        ZombieMetadata::encode(buf);
    }
};

class DrownedMetadata : public ZombieMetadata {
public:
    void encode(ByteBuffer &buf) override {
        ZombieMetadata::encode(buf);
    }
};

class ZombifiedPiglinMetadata : public ZombieMetadata {
public:
    void encode(ByteBuffer &buf) override {
        ZombieMetadata::encode(buf);
    }
};

class EndermanMetadata : public MonsterMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MonsterMetadata::encode(buf);
        EMD_WriteOptBlockID_(buf, 16, carried_block)
        EMD_WriteBoolean_(buf, 17, is_screaming)
        EMD_WriteBoolean_(buf, 18, is_staring)
    }

public:
    EMD_OptBlockID_ carried_block = 0;
    bool is_screaming = false;
    bool is_staring = false;
};

class EnderDragonMetadata : public MobMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MobMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 16, dragon_phase)
    }

public:
    int dragon_phase = 10;
};

class FlyingMetadata : public MobMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MobMetadata::encode(buf);
    }
};

class GhastMetadata : public FlyingMetadata {
public:
    void encode(ByteBuffer &buf) override {
        FlyingMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 16, is_attacking)
    }

public:
    bool is_attacking = false;

};

class PhantomMetadata : public FlyingMetadata {
public:
    void encode(ByteBuffer &buf) override {
        FlyingMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 16, size);
    }

public:
    int size = 0;

};

class SlimeMetadata : public MobMetadata {
public:
    void encode(ByteBuffer &buf) override {
        MobMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 16, size)
    }

public:
    int size = 1;

};

class LlamaSpitMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
    }
};

class AbstractMinecartMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 8, shaking_power);
        EMD_WriteVarInt_(buf, 9, shaking_direction);
        EMD_WriteFloat_(buf, 10, shaking_multiplier);
        EMD_WriteVarInt_(buf, 11, custom_block_id_and_damage);
        EMD_WriteVarInt_(buf, 12, custom_block_y_position);
        EMD_WriteBoolean_(buf, 13, show_custom_block)
    }

public:
    int shaking_power = 0;
    int shaking_direction = 1;
    float shaking_multiplier = 0;
    int custom_block_id_and_damage = 0;
    int custom_block_y_position = 6;
    bool show_custom_block = false;

};

class MinecartMetadata : public AbstractMinecartMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractMinecartMetadata::encode(buf);
    }
};

class AbstractMinecartContainerMetadata : public AbstractMinecartMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractMinecartMetadata::encode(buf);
    }
};

class MinecartHopperMetadata : public AbstractMinecartContainerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractMinecartContainerMetadata::encode(buf);
    }
};

class MinecartChestMetadata : public AbstractMinecartContainerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractMinecartContainerMetadata::encode(buf);
    }
};

class MinecartFurnaceMetadata : public AbstractMinecartContainerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractMinecartContainerMetadata::encode(buf);
        EMD_WriteBoolean_(buf, 14, has_fuel);
    }

public:
    bool has_fuel = false;

};

class MinecartTNTMetadata : public AbstractMinecartContainerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractMinecartContainerMetadata::encode(buf);
    }
};

class MinecartSpawnerMetadata : public AbstractMinecartContainerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractMinecartContainerMetadata::encode(buf);
    }
};

class MinecartCommandBlockMetadata : public AbstractMinecartContainerMetadata {
public:
    void encode(ByteBuffer &buf) override {
        AbstractMinecartContainerMetadata::encode(buf);
        EMD_WriteString_(buf, 14, command)
        EMD_WriteString_(buf, 15, last_output)
    }

public:
    std::string command;
    std::string last_output = "{\"text\":\"\"}";

};

class PrimedTntMetadata : public EntityMetadata {
public:
    void encode(ByteBuffer &buf) override {
        EntityMetadata::encode(buf);
        EMD_WriteVarInt_(buf, 8, fuse_time)
    }

public:
    int fuse_time = 80;

};

#endif //MYCELIUM_ENTITYMETADATA_H
