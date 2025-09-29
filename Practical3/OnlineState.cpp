//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#include "OnlineState.h"
#include "Users.h"

void OnlineState::handleSend(User* user, const std::string& message) {
    std::cout << "[Online] " << user->getName() << " sends: " << message << std::endl;
}