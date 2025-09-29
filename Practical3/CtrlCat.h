/**
 * @file CtrlCat.h
 * @brief Declaration of the CtrlCat chat room class implementing the Mediator pattern.
 * @author 
 *  - Jerusha Thaver (u23686376)  
 *  - Mukaji Mweni Rachel Kambala (u23559129)  
 * @date 28-Sep-2025
 *
 * CtrlCat is a concrete chat room that manages a list of users and the chat history.
 * It implements the Mediator design pattern, allowing users to send and receive messages
 * without directly interacting with each other.
 */

#ifndef CTRLCAT_H
#define CTRLCAT_H

#include "ChatRoom.h"
#include <vector>
#include <string>

/**
 * @class CtrlCat
 * @brief Concrete chat room implementing the Mediator pattern.
 *
 * The CtrlCat class manages users and chat history. It allows users to register,
 * remove, send messages, and store messages in the chat history.
 */
class CtrlCat : public ChatRoom {
public:
    /**
     * @brief Parameterized constructor.
     * @param name Name of the chat room (currently unused, can be extended for multiple rooms).
     */
    CtrlCat(std::string name);

    /**
     * @brief Default constructor.
     *
     * Initializes an empty CtrlCat chat room.
     */
    CtrlCat();

    /**
     * @brief Destructor.
     *
     * Cleans up resources associated with the CtrlCat instance.
     */
    virtual ~CtrlCat();

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
     * @return Always returns "CtrlCat".
     */
    std::string getName() { return "CtrlCat"; }
};

#endif
