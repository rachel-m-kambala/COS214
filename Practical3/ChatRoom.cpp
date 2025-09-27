#include "ChatRoom.h"
#include "User.h"
#include <iostream>

void ChatRoom::registerUser(User* user) {
    users.push_back(user);
}

void ChatRoom::removeUser(User* user) {
    for (std::vector<User*>::iterator it = users.begin(); it != users.end(); ++it) {
        if (*it == user) {
            users.erase(it);
            break;
        }
    }
}

void ChatRoom::sendMessage(const std::string& message, User* fromUser) {
    for (std::vector<User*>::iterator it = users.begin(); it != users.end(); ++it) {
        if (*it != fromUser) {
            (*it)->receive(message, fromUser, this);
        }
    }
}

void ChatRoom::saveMessage(const std::string& message, User* fromUser) {
    chatHistory.push_back(fromUser->getName() + ": " + message);
}