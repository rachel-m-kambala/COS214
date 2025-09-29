/**
 * @file CtrlCat.cpp
 * @brief Implementation of the CtrlCat chat room class implementing the Mediator pattern.
 * @author 
 *  - Jerusha Thaver (u23686376)  
 *  - Mukaji Mweni Rachel Kambala (u23559129)  
 * @date 28-Sep-2025
 *
 * This file contains the implementation of the CtrlCat class, which manages 
 * users and chat history in a chat room environment.
 */

#include "CtrlCat.h"
#include "Users.h"

/**
 * @brief Default constructor for CtrlCat.
 *
 * Initializes an empty chat room by calling the base ChatRoom constructor.
 */
CtrlCat::CtrlCat() : ChatRoom() {}

/**
 * @brief Destructor for CtrlCat.
 *
 * Cleans up resources associated with the CtrlCat instance.
 */
CtrlCat::~CtrlCat() {}

/**
 * @brief Registers a user into the chat room.
 * 
 * @param user Pointer to the User object to be added.
 *
 * Adds the given user to the list of active users in the chat room.
 */
void CtrlCat::registerUser(User* user) {
    users.push_back(user);
}

/**
 * @brief Removes a user from the chat room.
 * 
 * @param user Pointer to the User object to be removed.
 *
 * Iterates through the list of active users and removes the specified user if found.
 */
void CtrlCat::removeUser(User* user) {
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i] == user) {
            users.erase(users.begin() + i);
            break;
        }
    }
}

/**
 * @brief Sends a message from one user to all other users in the chat room.
 * 
 * @param message The message string to be sent.
 * @param fromUser Pointer to the User object sending the message.
 *
 * The message is delivered to all registered users except the sender.
 */
void CtrlCat::sendMessage(std::string message, User* fromUser) {
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i] != fromUser) {
            users[i]->receive(message, fromUser, this);
        }
    }
}

/**
 * @brief Saves a message to the chat history.
 * 
 * @param message The message string to be saved.
 * @param fromUser Pointer to the User object who sent the message.
 *
 * Prepends the sender's name to the message before storing it in the history log.
 */
void CtrlCat::saveMessage(std::string message, User* fromUser) {
    chatHistory.push_back(fromUser->getName() + ": " + message);
}
