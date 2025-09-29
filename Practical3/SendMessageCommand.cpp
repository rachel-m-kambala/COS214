/**
 * @file SendMessageCommand.cpp
 * @brief Implementation of the SendMessageCommand class for the Command pattern.
 *
 * This command delivers a message from a user to all other users in the specified chat room.
 *
 * @authors 
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#include "SendMessageCommand.h"
#include "ChatRoom.h"

/**
 * @brief Executes the command to send a message to all users in the chat room.
 *
 * Calls the chat room's sendMessage method to deliver the message from the user.
 */
void SendMessageCommand::execute() {
    chatRoom->sendMessage(message, fromUser);
}
