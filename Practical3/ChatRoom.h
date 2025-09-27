//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
// #ifndef CHATROOM_H
// #define CHATROOM_H

// #include <iostream>
// #include <vector>
// #include <map>
// #include <list>

// class ChatRoom {
//     public:
//         void registerUser(User user);
//         void sendMessage(std::string message, User fromUser);
//         void saveMessage(std::string message, User fromUser);
//         void removeUser(User user);
    
//     private:
//         Users* user;
//         std::string* chatHistory;
// }

// #endif

#ifndef CHATROOM_H
#define CHATROOM_H

#include <iostream>
#include <string>
#include <vector>
#include "Users.h"

class User; // forward declaration

class ChatRoom {
protected:
    std::vector<User*> users;
    std::vector<std::string> history;

public:
    virtual ~ChatRoom() {}

    virtual void registerUser(User* user) = 0;
    virtual void removeUser(User* user) = 0;
    virtual void sendMessage(std::string message, User* fromUser) = 0;
    virtual void saveMessage(std::string message, User* fromUser) = 0;

    std::vector<std::string> getHistory() { return history; }
};

#endif
