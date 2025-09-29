#ifndef NAME1_H
#define NAME1_H

#include "Users.h"
#include "ChatRoom.h"
#include <iostream>

class Name1 : public User {
public:
    Name1() : User("Name1") {}

    void receive(const std::string& message, User* fromUser, ChatRoom* room) override {
        std::cout << "[" << getName() << " received] " 
                  << fromUser->getName() << ": " << message << std::endl;
    }
};

#endif
