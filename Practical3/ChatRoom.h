//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef CHATROOM_H
#define CHATROOM_H

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>

class User;

class ChatRoom {
    public:
        ChatRoom(const std::string& name);
        virtual ~ChatRoom();
        const std::string& getName() const;
        virtual void registerUser(User user);
        virtual void sendMessage(const std::string message, User fromUser);
        virtual void saveMessage(const std::string message, User fromUser);
        virtual void removeUser(User user) = 0;
        void showHistory() const;
    
    private:
        std::vector<Users*> user;
        std::vector<std::string*> chatHistory;
        std::string roomName;
};

#endif