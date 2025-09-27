#ifndef CHATROOM_ITERATOR_H
#define CHATROOM_ITERATOR_H

#include "Iterator.h"
#include "ChatRoom.h"

class ChatRoomIterator : public Iterator {
private:
    ChatRoom* room;
    int index;
public:
    ChatRoomIterator(ChatRoom* r);
    void first();
    void next();
    bool isDone();
    User* currentItem();
};

#endif
