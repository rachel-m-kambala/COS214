#include "Users.h"
#include "ChatRoom.h"
#include "Command.h"

User::User(std::string name) : name(name) {}

std::string User::getName() const {
    return name;
}

void User::joinRoom(ChatRoom* room) {
    chatRooms.push_back(room);
}

void User::send(const std::string& message, ChatRoom* room) {
    room->broadcast(message, this);
}

void User::receive(const std::string& message, User* fromUser, ChatRoom* room) {
    std::cout << "[" << getName() << " received] " << fromUser->getName() << ": " << message << std::endl;
}

void User::addCommand(Command* command) {
    commandQueue.push_back(command);
}

void User::executeAll() {
    for (Command* cmd : commandQueue) {
        cmd->execute();
    }
    commandQueue.clear();
}

int User::getRoomCount() {
    return chatRooms.size();
}

ChatRoom* User::getRoomAt(int index) {
    return chatRooms[index];
}
