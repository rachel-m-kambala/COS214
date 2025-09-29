#ifndef CHATROOM_H
#define CHATROOM_H

#include <string>
#include <vector>

#include "Users.h"

class Iterator;  // forward declaration

class ChatRoom {
protected:
    std::vector<User*> users;
    std::vector<std::string> chatHistory;

public:
    ChatRoom();
    virtual ~ChatRoom();

    virtual void registerUser(User* user) = 0;
    virtual void removeUser(User* user) = 0;

    virtual void sendMessage(const std::string& message, User* fromUser);
    virtual void saveMessage(const std::string& message, User* fromUser);

    Iterator* createIterator();

    int getUserCount();
    User* getUserAt(int index);

    int getMessageCount();
    std::string getMessageAt(int index);

    virtual std::string getName() = 0;
    void broadcast(const std::string& message, User* fromUser);

};

#endif
