#include "SendMessageCommand.h"
#include "ChatRoom.h"

void SendMessageCommand::execute() {
    if (chatRoom && fromUser) {
        chatRoom->sendMessage(message, fromUser);
    }
}