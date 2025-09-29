/**
 * @file OfflineState.cpp
 * @brief Implementation of the OfflineState class for the State design pattern.
 *
 * Users in this state cannot send messages. Any attempt to send a message
 * will print a notification that the user is offline.
 *
 * @authors
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#include "OfflineState.h"
#include "Users.h"

/**
 * @brief Handles the send action for a User in Offline state.
 * @param user Pointer to the User attempting to send a message
 * @param message The content of the message
 *
 * This function blocks the message and prints a notification that the User
 * is currently offline.
 */
void OfflineState::handleSend(User* user, const std::string& message) {
    std::cout << "[Offline] " << user->getName()
              << " cannot send messages while offline." << std::endl;
}
