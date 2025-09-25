//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef NAME2_H
#define NAME2_H

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include "Users.h"

class Name2{
    public:
        void send(std::string message, ChatRoom room);
        void receive(std::string meesage, Users fromUser, ChatRoom room);
        void addCommand(Command command);
        void executeAll();
}

#endif