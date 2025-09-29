/**
 * @file OfflineState.h
 * @brief Declaration of the OfflineState class for the State design pattern.
 *
 * Represents the offline state of a User. Users in this state cannot send messages.
 *
 * @authors
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#ifndef OFFLINESTATE_H
#define OFFLINESTATE_H

#include "UserState.h"
#include <iostream>

/**
 * @class OfflineState
 * @brief Concrete state representing a User being offline.
 *
 * Implements the UserState interface. Users in this state cannot send messages.
 */
class OfflineState : public UserState {
public:
    /**
     * @brief Handles the attempt of sending a message while offline.
     * @param user Pointer to the User attempting to send the message.
     * @param message The message content to send.
     *
     * Prints a notification indicating that the user cannot send messages while offline.
     */
    void handleSend(User* user, const std::string& message) override;

    /**
     * @brief Returns the name of the state.
     * @return A string "Offline" representing this state.
     */
    std::string getStateName() const override { return "Offline"; }
};

#endif
