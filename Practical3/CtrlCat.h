//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef CTRLCAT_H
#define CTRLCAT_H

#include "ChatRoom.h"

class CtrlCat : public ChatRoom {
public:
    void registerUser(User* user);
    void removeUser(User* user);
    void sendMessage(std::string message, User* fromUser);
    void saveMessage(std::string message, User* fromUser);
};

#endif
