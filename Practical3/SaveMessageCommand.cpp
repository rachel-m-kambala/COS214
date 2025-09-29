//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#include "SaveMessageCommand.h"
#include "ChatRoom.h"   


void SaveMessageCommand::execute() {
    chatRoom->saveMessage(message, fromUser);
}
