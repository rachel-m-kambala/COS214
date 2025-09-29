/**
 * @file Dogorithm.h
 * @brief Declaration of the Dogorithm chat room class implementing the Mediator pattern.
 * @author 
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 *
 * Dogorithm is a concrete chat room that manages users and chat history.
 * It serves as a mediator allowing users to communicate without direct coupling.
 */

#ifndef DOGORITHM_H
#define DOGORITHM_H

#include "ChatRoom.h"
#include <vector>
#include <string>

/**
 * @class Dogorithm
 * @brief Concrete implementation of a chat room following the Mediator design pattern.
 *
 * This class manages a list of users and their chat messages.
 * Users send messages to the chat room, which forwards them to other registered users.
 */
class Dogorithm : public ChatRoom {
public:
    /**
     * @brief Constructor with a name parameter.
     * @param name Name of the chat room (not used internally in this implementation).
     */
    Dogorithm(std::string name);

    /**
     * @brief Default constructor.
     *
     * Initializes an empty Dogorithm chat room.
     */
    Dogorithm();

    /**
     * @brief Destructor.
     *
     * Cleans up resources associated with the Dogorithm instance.
     */
    virtual ~Dogorithm();

    /**
     * @brief Registers a user into the chat room.
     * @param user Pointer to the User to be added.
     */
    void registerUser(User* user);

    /**
     * @brief Removes a user from the chat room.
     * @param user Pointer to the User to be removed.
     */
    void removeUser(User* user);

    /**
     * @brief Sends a message from a user to all other users in the chat room.
     * @param message The message to send.
     * @param fromUser Pointer to the User sending the message.
     */
    void sendMessage(std::string message, User* fromUser);

    /**
     * @brief Saves a message to the chat room's history.
     * @param message The message to save.
     * @param fromUser Pointer to the User who sent the message.
     */
    void saveMessage(std::string message, User* fromUser);

    /**
     * @brief Returns the name of the chat room.
     * @return Always returns "Dogorithm".
     */
    std::string getName() { return "Dogorithm"; }
};

#endif
