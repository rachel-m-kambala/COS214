//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef CTRLCAT_H
#define CTRLCAT_H

#include "ChatRoom.h"
#include <vector>
#include <string>

class CtrlCat : public ChatRoom {
public:
 
    CtrlCat(std::string name);
    CtrlCat();

    virtual ~CtrlCat();

    void registerUser(User* user);
    void removeUser(User* user);
    void sendMessage(std::string message, User* fromUser);
    void saveMessage(std::string message, User* fromUser);

    std::string getName() { return "CtrlCat"; }
};

#endif
