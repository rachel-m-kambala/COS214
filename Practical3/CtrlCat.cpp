//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
/**
 * @file CtrlCat.cpp
 * @brief Implementation of the CtrlCat chat room class implementing the Mediator pattern.
 * @author Jerusha Thaver Mukaji Mweni Rachel Kambala 
 * @date 28-Sep-2025
 *
 * CtrlCat is a concrete chat room that manages its users and chat history.
 */

#include "CtrlCat.h"
#include "Users.h"

CtrlCat::CtrlCat() : ChatRoom() {}

CtrlCat::~CtrlCat() {}

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
            users[i]->receive(message, fromUser, this);
        }
    }
}

void CtrlCat::saveMessage(std::string message, User* fromUser) {
    chatHistory.push_back(fromUser->getName() + ": " + message);
}
