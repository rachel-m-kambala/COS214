/**
 * @file SaveMessageCommand.cpp
 * @brief Implementation of the SaveMessageCommand class following the Command design pattern.
 * 
 * This command appends a message to a chat room's history without sending it to other users.
 * 
 * @authors 
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#include "SaveMessageCommand.h"
#include "ChatRoom.h"

/**
 * @brief Executes the SaveMessageCommand.
 * 
 * Calls the saveMessage method of the associated chat room, appending the message
 * to the chat history from the specified user.
 */
void SaveMessageCommand::execute() {
    chatRoom->saveMessage(message, fromUser);
}
