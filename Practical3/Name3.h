#ifndef NAME3_H
#define NAME3_H

#include "Users.h"
#include "ChatRoom.h"
#include <iostream>

class Name3 : public User {
public:
    Name3() : User("Name3") {}

    void receive(const std::string& message, User* fromUser, ChatRoom* room) override {
        std::cout << "[" << getName() << " received] " 
                  << fromUser->getName() << ": " << message << std::endl;
    }
};

#endif
