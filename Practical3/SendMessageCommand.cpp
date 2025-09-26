//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129

#include "SendMessageCommand.h"

void SendMessageCommand::execute(){
    fromUser->sendMessage(message, fromUser);
}