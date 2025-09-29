/**
 * @file Command.h
 * @brief Defines the abstract Command class for encapsulating actions in the Command design pattern.
 *
 * The Command class represents an abstract action that can be executed by a User
 * on a ChatRoom. Concrete command classes (e.g., SendMessageCommand, SaveMessageCommand)
 * implement specific behaviors. This allows new actions to be added without modifying
 * existing system components, promoting flexibility and extensibility.
 *
 * @authors
 * - Jerusha Thaver (u23686376)
 * - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 2025-09-29
 */

#ifndef COMMAND_H
#define COMMAND_H

#include <string>

// Forward declarations instead of including headers
class ChatRoom;
class User;

/**
 * @class Command
 * @brief Abstract base class for encapsulating chat-related actions.
 *
 * Each Command stores the context needed to perform an action:
 * the ChatRoom where it will be executed, the User initiating the action,
 * and the message content. Subclasses implement the execute() method
 * to define specific behaviors.
 */
class Command {
protected:
    ChatRoom* chatRoom;   ///< Pointer to the ChatRoom where the command is executed.
    User* fromUser;       ///< Pointer to the User issuing the command.
    std::string message;  ///< The message associated with the command.

public:
    /**
     * @brief Constructs a Command with the given chat room, user, and message.
     * @param chatRoom Pointer to the target ChatRoom.
     * @param fromUser Pointer to the User issuing the command.
     * @param message The message content associated with the command.
     */
    Command(ChatRoom* chatRoom, User* fromUser, std::string message)
        : chatRoom(chatRoom), fromUser(fromUser), message(message) {}

    /**
     * @brief Virtual destructor to allow safe cleanup of derived command objects.
     */
    virtual ~Command() {}

    /**
     * @brief Executes the command's action.
     *
     * Must be implemented by derived classes to perform a specific action,
     * such as sending or saving a message.
     */
    virtual void execute() = 0;
};

#endif
