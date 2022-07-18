#include "serverbound_client_information.h"

ServerboundClientInformation::ServerboundClientInformation() {

}

ServerboundClientInformation::~ServerboundClientInformation() {

}

void ServerboundClientInformation::read(ByteBuffer& in) {
    settings.locale = in.readString();
    settings.viewDistance = in.readByte();
    settings.chatMode = (ChatMode) in.readVarInt();
    settings.chatColors = in.readByte();
    settings.displayedSkinParts.value = in.readByte();
    settings.mainHand = (MainHand) in.readVarInt();
    settings.enableTextFiltering = in.readByte();
    settings.allowServerListings = in.readByte();
}

ServerboundPacket* ServerboundClientInformation::createInstance() {
    return new ServerboundClientInformation();
}

int ServerboundClientInformation::getPacketID() const {
    return 0x07;
}