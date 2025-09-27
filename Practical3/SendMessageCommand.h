//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef SENDMESSAGECOMMAND_H
#define SENDMESSAGECOMMAND_H

#include "Command.h"

class SendMessageCommand : public Command {
public:
    SendMessageCommand(ChatRoom* chatRoom, User* fromUser, std::string message)
        : Command(chatRoom, fromUser, message) {}

    void execute();
};

#endif
