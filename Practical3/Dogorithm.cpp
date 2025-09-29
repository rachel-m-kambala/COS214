/**
 * @file Dogorithm.cpp
 * @brief Implementation of the Dogorithm chat room class implementing the Mediator pattern.
 * @author 
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 *
 * Dogorithm is a concrete chat room that manages its users and chat history.
 * It implements the Mediator design pattern, allowing users to communicate
 * without directly interacting with each other.
 */

#include "Dogorithm.h"
#include "Users.h"

/**
 * @brief Default constructor.
 *
 * Initializes an empty Dogorithm chat room.
 */
Dogorithm::Dogorithm() : ChatRoom() {}

/**
 * @brief Destructor.
 *
 * Cleans up resources associated with the Dogorithm instance.
 */
Dogorithm::~Dogorithm() {}

/**
 * @brief Registers a user into the chat room.
 * @param user Pointer to the User to be added.
 */
void Dogorithm::registerUser(User* user) {
    users.push_back(user);
}

/**
 * @brief Removes a user from the chat room.
 * @param user Pointer to the User to be removed.
 */
void Dogorithm::removeUser(User* user) {
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i] == user) {
            users.erase(users.begin() + i);
            break;
        }
    }
}

/**
 * @brief Sends a message from a user to all other users in the chat room.
 * @param message The message to send.
 * @param fromUser Pointer to the User sending the message.
 */
void Dogorithm::sendMessage(std::string message, User* fromUser) {
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i] != fromUser) {
            users[i]->receive(message, fromUser, this);
        }
    }
}

/**
 * @brief Saves a message to the chat room's history.
 * @param message The message to save.
 * @param fromUser Pointer to the User who sent the message.
 */
void Dogorithm::saveMessage(std::string message, User* fromUser) {
    chatHistory.push_back(fromUser->getName() + ": " + message);
}
