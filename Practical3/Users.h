#ifndef USERS_H
#define USERS_H

#include <string>
#include <vector>
#include <iostream>

class ChatRoom;
class Command;

class User {
private:
    std::string name;
    std::vector<ChatRoom*> chatRooms;
    std::vector<Command*> commandQueue;

public:
    User(std::string name);

    std::string getName() const;
    void joinRoom(ChatRoom* room);
    void send(const std::string& message, ChatRoom* room);
    virtual void receive(const std::string& message, User* fromUser, ChatRoom* room);

    void addCommand(Command* command);
    void executeAll();

    int getRoomCount();
    ChatRoom* getRoomAt(int index);
};

#endif
