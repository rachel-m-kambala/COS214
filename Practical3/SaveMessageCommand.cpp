#include "SaveMessageCommand.h"
#include "ChatRoom.h"

void SaveMessageCommand::execute() {
    if (chatRoom && fromUser) {
        chatRoom->saveMessage(message, fromUser);
    }
}