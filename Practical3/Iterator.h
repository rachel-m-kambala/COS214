/**
 * @file Iterator.h
 * @brief Abstract iterator interface for traversing Users in a ChatRoom.
 * @author 
 *  - Jerusha Thaver (u23686376)
 *  - Mukaji Mweni Rachel Kambala (u23559129)
 * @date 28-Sep-2025
 *
 * This file declares an abstract Iterator class which can be used to iterate 
 * over users in a ChatRoom without exposing the underlying collection structure.
 */

#ifndef ITERATOR_H
#define ITERATOR_H

#include <string>
#include "ChatRoom.h"
#include "Users.h"

/**
 * @class Iterator
 * @brief Abstract interface for iterating over a collection of Users.
 *
 * Concrete iterators (e.g., ChatRoomIterator) will implement this interface 
 * to allow traversal over ChatRoom's users.
 */
class Iterator {
public:
    /**
     * @brief Sets the iterator to the first element in the collection.
     */
    virtual void first() = 0;

    /**
     * @brief Moves the iterator to the next element in the collection.
     */
    virtual void next() = 0;

    /**
     * @brief Checks if the iterator has reached the end of the collection.
     * @return True if there are no more elements to iterate, false otherwise.
     */
    virtual bool isDone() = 0;

    /**
     * @brief Returns the current User object the iterator is pointing to.
     * @return Pointer to the current User.
     */
    virtual User* currentItem() = 0;

    /**
     * @brief Virtual destructor.
     */
    virtual ~Iterator() {}
};

#endif
