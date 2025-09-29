//Jerusha Thaver u23686376
//Mukaji Mweni Rachel Kambala u23559129
#include "Users.h"
#include "ChatRoom.h"
#include "Command.h"
#include "UserState.h"  

User::User(std::string name) : name(name), state(0) {}  

std::string User::getName() const {
    return name;
}

void User::joinRoom(ChatRoom* room) {
    chatRooms.push_back(room);
}

void User::send(const std::string& message, ChatRoom* room) {
    if (room) {
        room->sendMessage(message, this);
    }
}

void User::receive(const std::string& message, User* fromUser, ChatRoom* room) {
    std::cout << "[" << name << " received in " << (room ? "ChatRoom" : "Unknown")
              << "] " << fromUser->getName() << ": " << message << std::endl;
}

void User::addCommand(Command* command) {
    commandQueue.push_back(command);
}

void User::executeAll() {
    for (size_t i = 0; i < commandQueue.size(); ++i) {
        commandQueue[i]->execute();
        delete commandQueue[i];
    }
    commandQueue.clear();
}

int User::getRoomCount() {
    return chatRooms.size();
}

ChatRoom* User::getRoomAt(int index) {
    if (index >= 0 && index < (int)chatRooms.size()) {
        return chatRooms[index];
    }
    return 0;
}



void User::setState(UserState* newState) {
    state = newState;
}

void User::sendMessageWithState(const std::string& message) {
    if (state) {
        state->handleSend(this, message);
    } else {
        std::cout << name << " has no state set and cannot send messages this way.\n";
    }
}

std::string User::getStateName() const {
    if (state) {
        return state->getStateName();
    }
    return "No State";
}
