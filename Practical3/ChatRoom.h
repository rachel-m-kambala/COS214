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
        void registerUser(User user);
        void sendMessage(std::string message, User fromUser);
        void saveMessage(std::string message, User fromUser);
        void removeUser(User user);
    
    private:
        Users* user;
        std::string* chatHistory;
}

#endif