#ifndef COMMAND_H
#define COMMAND_H

<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>

class SendMessageCommand{
    public:
        virtual void execute() = 0;
    
    protected:
        ChatRoom room;
        std::string message;
        User fromUser;
};
=======
#include <string>

// Forward declarations instead of including headers
class ChatRoom;
class User;
>>>>>>> 135be2a25004f5a166d3c49e8b7dff295fc747be

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
