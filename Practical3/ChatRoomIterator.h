//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
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
