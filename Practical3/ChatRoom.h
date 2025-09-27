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
<<<<<<< HEAD
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
=======
#include "Users.h"

class User; // forward declaration

class ChatRoom {
protected:
    std::vector<User*> users;
    std::vector<std::string> history;
>>>>>>> 135be2a25004f5a166d3c49e8b7dff295fc747be

public:
    virtual ~ChatRoom() {}

    virtual void registerUser(User* user) = 0;
    virtual void removeUser(User* user) = 0;
    virtual void sendMessage(std::string message, User* fromUser) = 0;
    virtual void saveMessage(std::string message, User* fromUser) = 0;

    std::vector<std::string> getHistory() { return history; }
};

#endif
