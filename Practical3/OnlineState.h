#ifndef ONLINESTATE_H
#define ONLINESTATE_H

#include "UserState.h"
#include <iostream>

class OnlineState : public UserState {
public:
    void handleSend(User* user, const std::string& message) override;
    std::string getStateName() const override { return "Online"; }
};

#endif
