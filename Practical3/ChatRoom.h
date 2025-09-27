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

#include <string>
#include <vector>

class User;

class ChatRoom {
protected:
    std::vector<User*> users;
    std::vector<std::string> chatHistory;

public:
    virtual ~ChatRoom() {}

    virtual void registerUser(User* user);
    virtual void removeUser(User* user);

    virtual void sendMessage(const std::string& message, User* fromUser);
    virtual void saveMessage(const std::string& message, User* fromUser);

    const std::vector<std::string>& getHistory() const { return chatHistory; }
};

#endif