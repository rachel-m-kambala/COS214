#include "SendMessageCommand.h"
#include "ChatRoom.h" 

void SendMessageCommand::execute() {
    chatRoom->sendMessage(message, fromUser);
}
