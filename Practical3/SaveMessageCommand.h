//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef SAVEMESSAGECOMMAND_H
#define SAVEMESSAGECOMMAND_H

#include "Command.h"

class SaveMessageCommand : public Command {
public:
    SaveMessageCommand(ChatRoom* chatRoom, User* fromUser, std::string message)
        : Command(chatRoom, fromUser, message) {}

    void execute();
};

#endif
