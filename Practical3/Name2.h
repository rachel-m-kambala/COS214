//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef NAME2_H
#define NAME2_H

#include "Users.h"
#include "ChatRoom.h"
#include <iostream>

class Name2 : public User {
public:
    Name2() : User("Name2") {}

    void receive(const std::string& message, User* fromUser, ChatRoom* room) override {
        std::cout << "[" << getName() << " received] " 
                  << fromUser->getName() << ": " << message << std::endl;
    }
};

#endif
