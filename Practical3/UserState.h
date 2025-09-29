/**
 * @file UserState.h
 * @brief Declaration of the abstract UserState class for the State design pattern.
 *
 * Provides the interface for different user states, defining how a user sends messages
 * and allows querying the current state name.
 * 
 * @authors
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 */

#ifndef USERSTATE_H
#define USERSTATE_H

#include <string>

class User;

/**
 * @class UserState
 * @brief Abstract base class representing a user's state.
 *
 * Defines the interface for state-specific behavior when sending messages.
 */
class UserState {
public:
    /**
     * @brief Virtual destructor.
     */
    virtual ~UserState() {}

    /**
     * @brief Handles sending a message according to the user's current state.
     * @param user Pointer to the User sending the message
     * @param message The message content
     *
     * This method is implemented differently in each concrete state.
     */
    virtual void handleSend(User* user, const std::string& message) = 0;

    /**
     * @brief Returns the name of the current state.
     * @return A string representing the state's name
     */
    virtual std::string getStateName() const = 0;
};

#endif
