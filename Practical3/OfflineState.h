//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#ifndef OFFLINESTATE_H
#define OFFLINESTATE_H

#include "UserState.h"
#include <iostream>

class OfflineState : public UserState {
public:
    void handleSend(User* user, const std::string& message) override;
    std::string getStateName() const override { return "Offline"; }
};

#endif
