/**
 * @file OnlineState.h
 * @brief Declaration of the OnlineState class for the State design pattern.
 *
 * Represents the "Online" state of a User, allowing messages to be sent normally.
 *
 * @authors
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#ifndef ONLINESTATE_H
#define ONLINESTATE_H

#include "UserState.h"
#include <iostream>

/**
 * @class OnlineState
 * @brief Concrete state representing a User being online.
 *
 * Implements the handleSend() method to allow sending messages.
 */
class OnlineState : public UserState {
public:
    /**
     * @brief Handles sending a message while the User is online.
     * @param user Pointer to the User sending the message.
     * @param message The message content to send.
     */
    void handleSend(User* user, const std::string& message) override;

    /**
     * @brief Returns the name of the state.
     * @return A string "Online".
     */
    std::string getStateName() const override { return "Online"; }
};

#endif
