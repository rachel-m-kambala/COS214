#ifndef DONOTDISTURBSTATE_H
#define DONOTDISTURBSTATE_H

#include "UserState.h"
#include <iostream>

class DoNotDisturbState : public UserState {
public:
    void handleSend(User* user, const std::string& message) override;
    std::string getStateName() const override { return "DoNotDisturb"; }
};

#endif
