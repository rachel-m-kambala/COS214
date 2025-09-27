#include "CtrlCat.h"
#include "Users.h"

void CtrlCat::registerUser(User* user) {
    users.push_back(user);
}

void CtrlCat::removeUser(User* user) {
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i] == user) {
            users.erase(users.begin() + i);
            break;
        }
    }
}

void CtrlCat::sendMessage(std::string message, User* fromUser) {
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i] != fromUser) {
            users[i]->receive(message, fromUser);
        }
    }
}

void CtrlCat::saveMessage(std::string message, User* fromUser) {
    history.push_back(fromUser->getName() + ": " + message);
}
