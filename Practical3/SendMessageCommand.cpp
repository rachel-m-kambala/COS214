<<<<<<< HEAD
//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129

#include "SendMessageCommand.h"

void SendMessageCommand::execute(){
    fromUser->sendMessage(message, fromUser);
}
=======
#include "SendMessageCommand.h"
#include "ChatRoom.h" 

void SendMessageCommand::execute() {
    chatRoom->sendMessage(message, fromUser);
}
>>>>>>> 135be2a25004f5a166d3c49e8b7dff295fc747be
