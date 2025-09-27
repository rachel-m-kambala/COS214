//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef DOGORITHM_H
#define DOGORITHM_H

#include "ChatRoom.h"

<<<<<<< HEAD
class Dogorithm : public ChatRoom{
    public:
        void registerUser(User user);
        void sendMessage(std::string message, User fromUser);
        void saveMessage(std::string message, User fromUser);
        void removeUser(User user);
=======
class Dogorithm : public ChatRoom {
public:
    void registerUser(User* user);
    void removeUser(User* user);
    void sendMessage(std::string message, User* fromUser);
    void saveMessage(std::string message, User* fromUser);
>>>>>>> 135be2a25004f5a166d3c49e8b7dff295fc747be
};

#endif
