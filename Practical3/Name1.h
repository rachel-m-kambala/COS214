//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef NAME1_H
#define NAME1_H

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include "Users.h"

class Name1{
    public:
        void send(std::string message, ChatRoom room);
        void receive(std::string meesage, Users fromUser, ChatRoom room);
        void addCommand(Command command);
        void executeAll();
}

#endif