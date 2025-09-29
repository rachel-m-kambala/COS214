//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#include "OfflineState.h"
#include "Users.h"

void OfflineState::handleSend(User* user, const std::string& message) {
    std::cout << "[Offline] " << user->getName()
              << " cannot send messages while offline." << std::endl;
}
