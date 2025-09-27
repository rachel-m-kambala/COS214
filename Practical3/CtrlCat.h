//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef CTRLCAT_H
#define CTRLCAT_H

#include "ChatRoom.h"

<<<<<<< HEAD
class CtrlCat : public ChatRoom{
    public:
        void registerUser(User user);
        void sendMessage(std::string message, User fromUser);
        void saveMessage(std::string message, User fromUser);
        void removeUser(User user);
=======
class CtrlCat : public ChatRoom {
public:
    void registerUser(User* user);
    void removeUser(User* user);
    void sendMessage(std::string message, User* fromUser);
    void saveMessage(std::string message, User* fromUser);
>>>>>>> 135be2a25004f5a166d3c49e8b7dff295fc747be
};

#endif
