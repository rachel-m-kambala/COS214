//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>
#include "ChatRoom.h"
#include "Users.h"

// Forward declarations instead of including headers
class ChatRoom;
class User;

class Command {
protected:
    ChatRoom* chatRoom;
    User* fromUser;
    std::string message;

public:
    Command(ChatRoom* chatRoom, User* fromUser, std::string message)
        : chatRoom(chatRoom), fromUser(fromUser), message(message) {}

    virtual ~Command() {}
    virtual void execute() = 0;
};

#endif
