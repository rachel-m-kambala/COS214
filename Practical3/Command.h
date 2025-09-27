//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef COMMAND_H
#define COMMAND_H

#include <string>

class ChatRoom;
class User;

class Command {
protected:
    ChatRoom* chatRoom;
    User* fromUser;
    std::string message;

public:
    Command(ChatRoom* room, User* user, const std::string& msg)
        : chatRoom(room), fromUser(user), message(msg) {}

    virtual ~Command() {}
    virtual void execute() = 0;
};

#endif