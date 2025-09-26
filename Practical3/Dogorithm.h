//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef DOGORITHM_H
#define DOGORITHM_H

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include "ChatRoom.h"

class Dogorithm : public ChatRoom{
    public:
        void registerUser(User user);
        void sendMessage(std::string message, User fromUser);
        void saveMessage(std::string message, User fromUser);
        void removeUser(User user);
};

#endif