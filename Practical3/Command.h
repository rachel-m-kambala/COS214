//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <vector>
#include <map>
#include <list>

class SendMessageCommand{
    public:
        void execute();
    
    protected:
        ChatRoom room;
        std::string message;
        User fromUser;
}

#endif