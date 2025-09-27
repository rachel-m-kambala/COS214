#ifndef USERS_H
#define USERS_H

#include <iostream>
#include <string>
#include <vector>
#include "Command.h"

<<<<<<< HEAD
class Users{
    public:
        void send(std::string message, ChatRoom room);
        void receive(std::string meesage, Users fromUser, ChatRoom room);
        void addCommand(Command command);
        void executeAll();
    
    protected:
        ChatRoom* chatRooms;
        std::string name;
        Command* commandQueue;
};
=======
class ChatRoom; // forward declaration
>>>>>>> 135be2a25004f5a166d3c49e8b7dff295fc747be

class User {
private:
    std::string name;
    std::vector<Command*> commandQueue;

public:
    User(std::string name);

    std::string getName() const;
    void joinRoom(ChatRoom* room);
    void send(const std::string& message, ChatRoom* room);
    void receive(const std::string& message, User* fromUser);

    void addCommand(Command* command);
    void executeAll();
};

#endif
