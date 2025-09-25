//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef NAME3_H
#define NAME3_H

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include "Users.h"

class Name3{
    public:
        void send(std::string message, ChatRoom room);
        void receive(std::string meesage, Users fromUser, ChatRoom room);
        void addCommand(Command command);
        void executeAll();
}

#endif