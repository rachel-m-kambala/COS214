//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129

#include "SendMessageCommand.h"
#include "ChatRoom.h" 

void SendMessageCommand::execute() {
    chatRoom->sendMessage(message, fromUser);
}

