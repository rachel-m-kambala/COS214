//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef CHATROOM_H
#define CHATROOM_H

#include <iostream>
#include <vector>
#include <map>
#include <list>

class ChatRoom {
    public:
        void registerUser(User user) = 0;
        void sendMessage(std::string message, User fromUser) = 0;
        void saveMessage(std::string message, User fromUser) = 0;
        void removeUser(User user) = 0;
    
    private:
        Users* user;
        std::string* chatHistory;
}

#endif