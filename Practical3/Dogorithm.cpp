#include "Dogorithm.h"
#include "Users.h"

Dogorithm::Dogorithm() : ChatRoom() {}

Dogorithm::~Dogorithm() {}

void Dogorithm::registerUser(User* user) {
    users.push_back(user);
}

void Dogorithm::removeUser(User* user) {
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i] == user) {
            users.erase(users.begin() + i);
            break;
        }
    }
}

void Dogorithm::sendMessage(std::string message, User* fromUser) {
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i] != fromUser) {
            users[i]->receive(message, fromUser, this); 
        }
    }
}

void Dogorithm::saveMessage(std::string message, User* fromUser) {
    chatHistory.push_back(fromUser->getName() + ": " + message); 
}
