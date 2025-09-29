//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#include "DoNotDisturbState.h"
#include "Users.h"

void DoNotDisturbState::handleSend(User* user, const std::string& message) {
    std::cout << "[DoNotDisturb] " << user->getName()
              << " is in DND mode. Message blocked: " << message << std::endl;
}
