/**
 * @file ChatRoomIterator.cpp
 * @brief Implementation of the ChatRoomIterator class, which provides an Iterator
 *        for traversing users within a ChatRoom.
 *
 * This class demonstrates the Iterator design pattern by allowing sequential
 * traversal of users in a chat room without exposing the underlying representation.
 *
 * @authors
 * - Jerusha Thaver (u23686376)
 * - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 2025-09-29
 */

#include "ChatRoomIterator.h"

/**
 * @brief Constructs a ChatRoomIterator for a given ChatRoom.
 * @param r Pointer to the ChatRoom to be iterated.
 */
ChatRoomIterator::ChatRoomIterator(ChatRoom* r) {
    room = r;
    index = 0;
}

/**
 * @brief Resets the iterator to the first user in the chat room.
 */
void ChatRoomIterator::first() {
    index = 0;
}

/**
 * @brief Moves the iterator to the next user in the chat room.
 */
void ChatRoomIterator::next() {
    index++;
}

/**
 * @brief Checks whether all users have been traversed.
 * @return true if iteration is complete, false otherwise.
 */
bool ChatRoomIterator::isDone() {
    return index >= room->getUserCount(); 
}

/**
 * @brief Retrieves the current user in the iteration.
 * @return User* Pointer to the current user, or NULL if iteration is complete.
 */
User* ChatRoomIterator::currentItem() {
    if (!isDone()) {
        return room->getUserAt(index);    
    }
    return NULL;
}
