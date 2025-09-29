//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#include "ChatRoomIterator.h"

ChatRoomIterator::ChatRoomIterator(ChatRoom* r) {
    room = r;
    index = 0;
}

void ChatRoomIterator::first() {
    index = 0;
}

void ChatRoomIterator::next() {
    index++;
}

bool ChatRoomIterator::isDone() {
    return index >= room->getUserCount(); 
}

User* ChatRoomIterator::currentItem() {
    if (!isDone()) {
        return room->getUserAt(index);    
    }
    return NULL;
}
