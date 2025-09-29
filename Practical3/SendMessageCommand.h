/**
 * @file SendMessageCommand.h
 * @brief Declaration of the SendMessageCommand class for the Command design pattern.
 *
 * This command encapsulates the action of sending a message from a user
 * to all other users in a chat room.
 *
 * @authors 
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#ifndef SENDMESSAGECOMMAND_H
#define SENDMESSAGECOMMAND_H

#include "Command.h"

/**
 * @class SendMessageCommand
 * @brief Concrete Command to send a message to a chat room.
 *
 * Inherits from Command. When executed, it calls the chat room's
 * sendMessage function to deliver the message from the user.
 */
class SendMessageCommand : public Command {
public:
    /**
     * @brief Constructor for SendMessageCommand
     * @param chatRoom Pointer to the chat room where the message will be sent
     * @param fromUser Pointer to the user sending the message
     * @param message The message to be sent
     */
    SendMessageCommand(ChatRoom* chatRoom, User* fromUser, std::string message)
        : Command(chatRoom, fromUser, message) {}

    /**
     * @brief Executes the command
     *
     * Calls the chat room's sendMessage method to deliver the message
     * from the user to all other users in the chat room.
     */
    void execute();
};

#endif
