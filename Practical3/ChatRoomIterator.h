/**
 * @file ChatRoomIterator.h
 * @brief Defines the ChatRoomIterator class, an implementation of the Iterator
 *        design pattern for traversing users in a ChatRoom.
 *
 * The ChatRoomIterator provides sequential access to users inside a ChatRoom
 * without exposing the underlying data structure. This ensures loose coupling
 * and clear separation of responsibilities between the ChatRoom and traversal logic.
 *
 * @authors
 * - Jerusha Thaver (u23686376)
 * - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 2025-09-29
 */

#ifndef CHATROOM_ITERATOR_H
#define CHATROOM_ITERATOR_H

#include "Iterator.h"
#include "ChatRoom.h"

/**
 * @class ChatRoomIterator
 * @brief Concrete iterator for traversing users in a ChatRoom.
 *
 * The ChatRoomIterator maintains the current position (index) in the user list
 * of a given ChatRoom and provides methods to move through the list and access users.
 */
class ChatRoomIterator : public Iterator {
private:
    ChatRoom* room;  ///< Pointer to the ChatRoom being iterated over.
    int index;       ///< Current position in the ChatRoom's user list.

public:
    /**
     * @brief Constructs an iterator for a specific ChatRoom.
     * @param r Pointer to the ChatRoom to be iterated.
     */
    ChatRoomIterator(ChatRoom* r);

    /**
     * @brief Resets the iterator to the first user in the ChatRoom.
     */
    void first();

    /**
     * @brief Advances the iterator to the next user in the ChatRoom.
     */
    void next();

    /**
     * @brief Checks if all users have been traversed.
     * @return true if iteration is complete, false otherwise.
     */
    bool isDone();

    /**
     * @brief Retrieves the current user in the iteration.
     * @return Pointer to the current User, or NULL if iteration is complete.
     */
    User* currentItem();
};

#endif
