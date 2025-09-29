/**
 * @file DoNotDisturbState.h
 * @brief Declaration of the DoNotDisturbState class implementing the State design pattern.
 *
 * This state prevents a User from sending messages and indicates that they are in
 * "Do Not Disturb" mode.
 * 
 * @authors
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#ifndef DONOTDISTURBSTATE_H
#define DONOTDISTURBSTATE_H

#include "UserState.h"
#include <iostream>

/**
 * @class DoNotDisturbState
 * @brief Concrete state for Users who do not want to receive/send messages temporarily.
 *
 * In this state, any attempt to send a message is blocked and a notification is printed.
 */
class DoNotDisturbState : public UserState {
public:
    /**
     * @brief Handles the send action for a User in DoNotDisturb state.
     * @param user Pointer to the User attempting to send a message
     * @param message The content of the message
     *
     * This function blocks the message and prints a notification that the User
     * is currently in DND mode.
     */
    void handleSend(User* user, const std::string& message) override;

    /**
     * @brief Returns the name of this state.
     * @return std::string "DoNotDisturb"
     */
    std::string getStateName() const override { return "DoNotDisturb"; }
};

#endif
