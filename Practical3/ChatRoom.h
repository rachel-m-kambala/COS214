/**
 * @file ChatRoom.h
 * @brief Declaration of the ChatRoom class, which acts as a Mediator in PetSpace.
 *
 * The ChatRoom class defines the interface and common functionality for all chat rooms.
 * It manages registered users, stores chat history, and facilitates mediated communication
 * between users without direct coupling.
 *
 * @authors
 * - Jerusha Thaver (u23686376)
 * - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 2025-09-29
 */

#ifndef CHATROOM_H
#define CHATROOM_H

#include <string>
#include <vector>
#include "Users.h"

class Iterator;  ///< Forward declaration of the Iterator class.

/**
 * @class ChatRoom
 * @brief Abstract Mediator class for handling communication between Users.
 *
 * Responsibilities:
 * - Manages a collection of users participating in the chat room.
 * - Stores the chat history of all messages.
 * - Provides an interface for registering and removing users.
 * - Mediates sending and receiving of messages between users.
 */
class ChatRoom {
protected:
    /**
     * @brief List of users currently in the chat room.
     */
    std::vector<User*> users;

    /**
     * @brief Stores all messages sent in the chat room.
     */
    std::vector<std::string> chatHistory;

public:
    /**
     * @brief Constructs a ChatRoom object.
     */
    ChatRoom();

    /**
     * @brief Virtual destructor for ChatRoom.
     */
    virtual ~ChatRoom();

    /**
     * @brief Registers a user with the chat room.
     * @param user Pointer to the User being added.
     */
    virtual void registerUser(User* user) = 0;

    /**
     * @brief Removes a user from the chat room.
     * @param user Pointer to the User being removed.
     */
    virtual void removeUser(User* user) = 0;

    /**
     * @brief Sends a message to all users except the sender.
     * @param message The message text.
     * @param fromUser The user who sent the message.
     */
    virtual void sendMessage(const std::string& message, User* fromUser);

    /**
     * @brief Saves a message to the chat history.
     * @param message The message to save.
     * @param fromUser The user who sent the message.
     */
    virtual void saveMessage(const std::string& message, User* fromUser);

    /**
     * @brief Creates an iterator for traversing the users in the chat room.
     * @return Iterator* A pointer to a new iterator instance.
     */
    Iterator* createIterator();

    /**
     * @brief Retrieves the number of users in the chat room.
     * @return int The count of users.
     */
    int getUserCount();

    /**
     * @brief Gets the user at a specified index.
     * @param index The index of the user.
     * @return User* Pointer to the user, or NULL if index is invalid.
     */
    User* getUserAt(int index);

    /**
     * @brief Retrieves the number of messages in the chat history.
     * @return int The count of stored messages.
     */
    int getMessageCount();

    /**
     * @brief Gets a message at the specified index in the chat history.
     * @param index The index of the message.
     * @return std::string The message, or an empty string if index is invalid.
     */
    std::string getMessageAt(int index);

    /**
     * @brief Gets the name of the chat room.
     * @return std::string The chat room's name.
     */
    virtual std::string getName() = 0;

    /**
     * @brief Broadcasts a message to all users and stores it in the chat history.
     * @param message The message to broadcast.
     * @param fromUser The user who sent the message.
     */
    void broadcast(const std::string& message, User* fromUser);
};

#endif
