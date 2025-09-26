//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <string>

class SendMessageCommand{
    public:
        virtual void execute() = 0;
    
    protected:
        ChatRoom room;
        std::string message;
        User fromUser;
};

#endif