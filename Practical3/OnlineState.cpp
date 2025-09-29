/**
 * @file OnlineState.cpp
 * @brief Implementation of the OnlineState class for the State design pattern.
 *
 * Handles the behavior of a User when they are in the online state, allowing messages to be sent.
 *
 * @authors
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#include "OnlineState.h"
#include "Users.h"

/**
 * @brief Handles sending a message when the User is online.
 * @param user Pointer to the User sending the message.
 * @param message The message content to send.
 *
 * Prints the message to the console showing that the user is online and has sent it.
 */
void OnlineState::handleSend(User* user, const std::string& message) {
    std::cout << "[Online] " << user->getName() << " sends: " << message << std::endl;
}
