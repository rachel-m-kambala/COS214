/**
 * @file ChatRoom.cpp
 * @brief Implements the ChatRoom class which acts as a Mediator between Users in PetSpace.
 *
 * The ChatRoom class handles communication between users by forwarding messages,
 * storing chat history, and managing user interactions without direct coupling between users.
 *
 * @authors
 * - Jerusha Thaver (u23686376)
 * - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 2025-09-29
 */

#include "ChatRoom.h"
#include "ChatRoomIterator.h"

/**
 * @brief Creates an iterator for traversing the users in the chat room.
 * @return Iterator* A pointer to a new ChatRoomIterator.
 */
Iterator* ChatRoom::createIterator() {
    return new ChatRoomIterator(this);
}

/**
 * @brief Default constructor for ChatRoom.
 */
ChatRoom::ChatRoom() {}

/**
 * @brief Destructor for ChatRoom.
 */
ChatRoom::~ChatRoom() {}

/**
 * @brief Sends a message to all users in the room except the sender.
 * @param message The message string to be delivered.
 * @param fromUser The user who is sending the message.
 */
void ChatRoom::sendMessage(const std::string& message, User* fromUser) {
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i] != fromUser) {
            users[i]->receive(message, fromUser, this);
        }
    }
}

/**
 * @brief Saves a message to the chat history.
 * @param message The message to be stored.
 * @param fromUser The user who sent the message.
 */
void ChatRoom::saveMessage(const std::string& message, User* fromUser) {
    chatHistory.push_back(fromUser->getName() + ": " + message);
}

/**
 * @brief Gets the number of users currently in the chat room.
 * @return int The number of users.
 */
int ChatRoom::getUserCount() {
    return users.size();
}

/**
 * @brief Retrieves a user at the given index.
 * @param index The index of the user.
 * @return User* A pointer to the user if valid, otherwise NULL.
 */
User* ChatRoom::getUserAt(int index) {
    if (index >= 0 && index < (int)users.size())
        return users[index];
    return NULL;
}

/**
 * @brief Gets the total number of messages in the chat history.
 * @return int The number of messages stored.
 */
int ChatRoom::getMessageCount() {
    return chatHistory.size();
}

/**
 * @brief Retrieves a message from chat history at the given index.
 * @param index The index of the message.
 * @return std::string The message if valid, otherwise an empty string.
 */
std::string ChatRoom::getMessageAt(int index) {
    if (index >= 0 && index < (int)chatHistory.size())
        return chatHistory[index];
    return "";
}

/**
 * @brief Broadcasts a message to all users and stores it in chat history.
 * @param message The message to be broadcasted.
 * @param fromUser The user who is sending the message.
 */
void ChatRoom::broadcast(const std::string& message, User* fromUser) {
    chatHistory.push_back(fromUser->getName() + ": " + message);
    for (auto& user : users) {
        if (user != fromUser) { 
            user->receive(message, fromUser, this);
        }
    }
}
