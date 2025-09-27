#include "SaveMessageCommand.h"
#include "ChatRoom.h"   


void SaveMessageCommand::execute() {
    chatRoom->saveMessage(message, fromUser);
}
