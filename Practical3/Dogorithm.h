//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef DOGORITHM_H
#define DOGORITHM_H

#include "ChatRoom.h"
#include <vector>
#include <string>


class Dogorithm : public ChatRoom {
public:

    Dogorithm(std::string name);
    Dogorithm();
    virtual ~Dogorithm();

    void registerUser(User* user);
    void removeUser(User* user);
    void sendMessage(std::string message, User* fromUser);
    void saveMessage(std::string message, User* fromUser);
};

#endif
