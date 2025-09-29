/**
 * @file Name3.h
 * @brief Concrete User implementation for a user named "Name3".
 * 
 * This class represents a specific User participating in chat rooms.
 * It implements the receive method to display incoming messages.
 * 
 * @authors 
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#ifndef NAME3_H
#define NAME3_H

#include "Users.h"
#include "ChatRoom.h"
#include <iostream>

/**
 * @class Name3
 * @brief Concrete user named "Name3" participating in chat rooms.
 *
 * This user receives messages from chat rooms and prints them to the console.
 */
class Name3 : public User {
public:
    /**
     * @brief Constructs a Name3 user with the name "Name3".
     */
    Name3() : User("Name3") {}

    /**
     * @brief Receives a message from another user in a chat room.
     * 
     * @param message The message content sent by another user.
     * @param fromUser Pointer to the user who sent the message.
     * @param room Pointer to the chat room from which the message originates.
     *
     * This method prints the received message to the console in a formatted style.
     */
    void receive(const std::string& message, User* fromUser, ChatRoom* room) override {
        std::cout << "[" << getName() << " received] " 
                  << fromUser->getName() << ": " << message << std::endl;
    }
};

#endif
