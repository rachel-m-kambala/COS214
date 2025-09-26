//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef USERS_H
#define USERS_H

#include <iostream>
#include <vector>
#include <map>
#include <list>

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

#endif