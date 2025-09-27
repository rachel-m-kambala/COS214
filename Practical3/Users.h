//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
// #ifndef USERS_H
// #define USERS_H

// #include <iostream>
// #include <vector>
// #include <map>
// #include <list>

// class Users{
//     public:
//         void send(std::string message, ChatRoom room);
//         void receive(std::string meesage, Users fromUser, ChatRoom room);
//         void addCommand(Command command);
//         void executeAll();
    
//     protected:
//         ChatRoom* chatRooms;
//         std::string name;
//         Command* commandQueue;
// }

// #endif

#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include <iostream>
#include "Command.h"

class ChatRoom;

class User {
private:
    std::string name;
    std::vector<ChatRoom*> chatRooms;
    std::vector<Command*> commandQueue;

public:
    User(const std::string& n);
    ~User();

    std::string getName() const;

    void joinRoom(ChatRoom* room);
    void leaveRoom(ChatRoom* room);

    void addCommand(Command* command);
    void executeAll();

    void send(const std::string& message, ChatRoom* room);
    void receive(const std::string& message, User* fromUser, ChatRoom* room);
};

#endif
