#ifndef USERSTATE_H
#define USERSTATE_H

#include <string>

class User;

class UserState {
public:
    virtual ~UserState() {}
    virtual void handleSend(User* user, const std::string& message) = 0;  
    virtual std::string getStateName() const = 0;
};

#endif
