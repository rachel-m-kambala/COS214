#ifndef USERS_H
#define USERS_H

#include <iostream>
#include <string>
#include <vector>
#include "Command.h"

class ChatRoom; // forward declaration

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
