#include <stdio.h>
#include <string.h>

// 
union Packet {
    struct {
        int opcode;
        int statusCode;
    } controlMessage;
    char dataPayload[100]; 

}


enum PacketType {
    CONTROL,
    DATA
};


struct DataPacket {
    enum PacketType type;
    union Packet packet;
};


void assignControlPacket(struct DataPacket *packet) {
    packet->type = CONTROL;
    printf("Enter opcode: ");
    scanf("%d", &packet->packet.controlMessage.opcode);
    printf("Enter status code: ");
    scanf("%d", &packet->packet.controlMessage.statusCode);
}


void assignDataPacket(struct DataPacket *packet) {
    packet->type = DATA;
    printf("Enter data payload: ");
    getchar(); 
    fgets(packet->packet.dataPayload, sizeof(packet->packet.dataPayload), stdin);
    packet->packet.dataPayload[strcspn(packet->packet.dataPayload, "\n")] = '\0'; // Remove trailing newline
}


void printPacket(const struct DataPacket *packet) {
    if (packet->type == CONTROL) {
        printf("Control Message:\n");
        printf("Opcode: %d\n", packet->packet.controlMessage.opcode);
        printf("Status Code: %d\n", packet->packet.controlMessage.statusCode);
    } else {
        printf("Data Payload:\n");
        printf("%s\n", packet->packet.dataPayload);
    }
}

int main() {
    
    struct DataPacket packets[2];

    
    printf("Enter control message packet:\n");
    assignControlPacket(&packets[0]);

    printf("Enter data payload packet:\n");
    assignDataPacket(&packets[1]);

    
    printf("\nPacket 1:\n");
    printPacket(&packets[0]);
    printf("\nPacket 2:\n");
    printPacket(&packets[1]);

    return 0;
}
