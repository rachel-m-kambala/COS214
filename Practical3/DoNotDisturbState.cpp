/**
 * @file DoNotDisturbState.cpp
 * @brief Implementation of the DoNotDisturbState class for the State design pattern.
 *
 * Blocks messages when the user is in "Do Not Disturb" mode.
 * 
 * @authors
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#include "DoNotDisturbState.h"
#include "Users.h"
#include <iostream>

/**
 * @brief Handles sending a message when the user is in Do Not Disturb state.
 * @param user Pointer to the User attempting to send the message
 * @param message The content of the message
 *
 * This implementation blocks the message and outputs a notification that
 * the user is in DND mode.
 */
void DoNotDisturbState::handleSend(User* user, const std::string& message) {
    std::cout << "[DoNotDisturb] " << user->getName()
              << " is in DND mode. Message blocked: " << message << std::endl;
}
