/**
 * @file Users.h
 * @brief Declaration of the User class, managing chat room participation, command execution,
 *        and user states (State pattern) in the Mediator and Command patterns.
 *
 * Users can join chat rooms, send and receive messages, execute queued commands, and
 * change their state to alter message sending behavior.
 *
 * @authors
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#ifndef USERS_H
#define USERS_H

#include <string>
#include <vector>
#include <iostream>

class ChatRoom;
class Command;
class UserState;

/**
 * @class User
 * @brief Represents a participant in chat rooms.
 *
 * Manages user operations for sending/receiving messages, command execution,
 * and user state behaviors.
 */
class User {
private:
    std::string name;                    /**< Name of the user */
    std::vector<ChatRoom*> chatRooms;    /**< List of chat rooms the user has joined */
    std::vector<Command*> commandQueue;  /**< Queue of commands to execute */
    UserState* state;                    /**< Current state of the user (State pattern) */

public:
    /**
     * @brief Constructs a User with a given name
     * @param name The name of the user
     */
    User(std::string name);

    /**
     * @brief Returns the user's name
     * @return Name of the user
     */
    std::string getName() const;

    /**
     * @brief Adds the user to a chat room
     * @param room Pointer to the chat room
     */
    void joinRoom(ChatRoom* room);

    /**
     * @brief Sends a message to a specified chat room
     * @param message The message content
     * @param room Pointer to the chat room
     */
    void send(const std::string& message, ChatRoom* room);

    /**
     * @brief Receives a message from another user
     * @param message The message content
     * @param fromUser Pointer to the sender
     * @param room Pointer to the chat room
     */
    virtual void receive(const std::string& message, User* fromUser, ChatRoom* room);

    /**
     * @brief Adds a command to the user's command queue
     * @param command Pointer to the command
     */
    void addCommand(Command* command);

    /**
     * @brief Executes all queued commands and clears the queue
     */
    void executeAll();

    /**
     * @brief Returns the number of chat rooms the user has joined
     * @return Number of chat rooms
     */
    int getRoomCount();

    /**
     * @brief Returns the chat room at a specified index
     * @param index Index of the chat room
     * @return Pointer to the chat room, or nullptr if index is invalid
     */
    ChatRoom* getRoomAt(int index);

    /**
     * @brief Sets the current state of the user
     * @param newState Pointer to the new UserState
     */
    void setState(UserState* newState);

    /**
     * @brief Sends a message using the current state
     * @param message The message content
     *
     * The behavior depends on the UserState implementation.
     */
    void sendMessageWithState(const std::string& message);

    /**
     * @brief Returns the name of the current state
     * @return State name as a string, or "No State" if none is set
     */
    std::string getStateName() const;
};

#endif
