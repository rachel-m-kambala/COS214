/**
 * @file SaveMessageCommand.h
 * @brief Header for the SaveMessageCommand class implementing the Command pattern.
 * 
 * This command appends a message to a chat room's history without sending it to other users.
 * It inherits from the abstract Command class.
 * 
 * @authors 
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#ifndef SAVEMESSAGECOMMAND_H
#define SAVEMESSAGECOMMAND_H

#include "Command.h"

/**
 * @class SaveMessageCommand
 * @brief Concrete command that saves a message to a chat room's history.
 */
class SaveMessageCommand : public Command {
public:
    /**
     * @brief Constructor for SaveMessageCommand.
     * @param chatRoom Pointer to the chat room where the message will be saved.
     * @param fromUser Pointer to the user sending the message.
     * @param message The message string to be saved.
     */
    SaveMessageCommand(ChatRoom* chatRoom, User* fromUser, std::string message)
        : Command(chatRoom, fromUser, message) {}

    /**
     * @brief Executes the command to save the message in the chat room history.
     */
    void execute();
};

#endif
