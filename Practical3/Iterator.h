//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef ITERATOR_H
#define ITERATOR_H

#include <string>
#include "ChatRoom.h"
#include "Users.h"

// Abstract Iterator
class Iterator {
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isDone() = 0;
    virtual User* currentItem() = 0;
    virtual ~Iterator() {}
};

#endif
