/**
 * @file Users.cpp
 * @brief Implementation of the User class and its state management for the Mediator and Command patterns.
 *
 * Handles user operations such as joining chat rooms, sending/receiving messages,
 * executing queued commands, and interacting with the UserState (State pattern).
 *
 * @authors 
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#include "Users.h"
#include "ChatRoom.h"
#include "Command.h"
#include "UserState.h"  

/**
 * @brief Constructs a User with a given name
 * @param name The name of the user
 */
User::User(std::string name) : name(name), state(0) {}  

/**
 * @brief Returns the user's name
 * @return The name of the user as a std::string
 */
std::string User::getName() const {
    return name;
}

/**
 * @brief Adds the user to a chat room
 * @param room Pointer to the ChatRoom to join
 */
void User::joinRoom(ChatRoom* room) {
    chatRooms.push_back(room);
}

/**
 * @brief Sends a message to a specified chat room
 * @param message The message content
 * @param room Pointer to the ChatRoom where the message will be sent
 */
void User::send(const std::string& message, ChatRoom* room) {
    if (room) {
        room->sendMessage(message, this);
    }
}

/**
 * @brief Receives a message from another user in a chat room
 * @param message The message content
 * @param fromUser Pointer to the User sending the message
 * @param room Pointer to the ChatRoom where the message originated
 */
void User::receive(const std::string& message, User* fromUser, ChatRoom* room) {
    std::cout << "[" << name << " received in " << (room ? "ChatRoom" : "Unknown")
              << "] " << fromUser->getName() << ": " << message << std::endl;
}

/**
 * @brief Adds a command to the user's command queue
 * @param command Pointer to the Command to add
 */
void User::addCommand(Command* command) {
    commandQueue.push_back(command);
}

/**
 * @brief Executes all queued commands and clears the queue
 */
void User::executeAll() {
    for (size_t i = 0; i < commandQueue.size(); ++i) {
        commandQueue[i]->execute();
        delete commandQueue[i];
    }
    commandQueue.clear();
}

/**
 * @brief Returns the number of chat rooms the user has joined
 * @return The count of chat rooms
 */
int User::getRoomCount() {
    return chatRooms.size();
}

/**
 * @brief Returns the chat room at a specified index
 * @param index Index of the chat room
 * @return Pointer to the ChatRoom if valid, nullptr otherwise
 */
ChatRoom* User::getRoomAt(int index) {
    if (index >= 0 && index < (int)chatRooms.size()) {
        return chatRooms[index];
    }
    return 0;
}

/**
 * @brief Sets the current state of the user
 * @param newState Pointer to the new UserState
 */
void User::setState(UserState* newState) {
    state = newState;
}

/**
 * @brief Sends a message using the user's current state
 * @param message The message content
 *
 * The actual behavior depends on the UserState implementation.
 */
void User::sendMessageWithState(const std::string& message) {
    if (state) {
        state->handleSend(this, message);
    } else {
        std::cout << name << " has no state set and cannot send messages this way.\n";
    }
}

/**
 * @brief Returns the name of the current state
 * @return The state name as a std::string, or "No State" if none set
 */
std::string User::getStateName() const {
    if (state) {
        return state->getStateName();
    }
    return "No State";
}
