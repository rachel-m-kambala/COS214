//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef SENDMESSAGECOMMAND_H
#define SENDMESSAGECOMMAND_H

#include "Command.h"

<<<<<<< HEAD
class SendMessageCommand : public Command{
    public:
        void execute();
};
=======
class SendMessageCommand : public Command {
public:
    SendMessageCommand(ChatRoom* chatRoom, User* fromUser, std::string message)
        : Command(chatRoom, fromUser, message) {}
>>>>>>> 135be2a25004f5a166d3c49e8b7dff295fc747be

    void execute();
};

#endif
