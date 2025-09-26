//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129

#include "ChatRoom.h"
#include "User.h"

ChatRoom::ChatRoom(const std::string& name) : roomName(name){}

const std::striing& ChatRoom::getName() const{
    return roomName;
}

void ChatRoom::registerUser(User* user){
    users.push_back(user);
}

void ChatRoom::removeUser(User* user) {
    users.erase(std::remove(users.begin(), users.end(), user), users.end());
}

void ChatRoom::sendMessage(const std::string& message, User* fromUser){
    saveMessage(message, fromUser);
    for (User* u : users) {
        if (u != fromUser) {
            u->receive(message, fromUser, this);
        }
    }
}

void ChatRoom::saveMessage(const std::string& message, User* fromUser){
    history.push_back(fromUser->getName() + ": " + message);
}

void ChatRoom::showHistory() const{
    std::cout << "\n--- Chat history of " << roomName << " ---\n";
    for (const auto& line : history) std::cout << line << "\n";
}