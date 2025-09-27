#include "Users.h"
#include "ChatRoom.h"
#include "Command.h"
#include "SendMessageCommand.h"
#include "SaveMessageCommand.h"

User::User(std::string name) : name(name) {}

std::string User::getName() const {
    return name;
}

void User::joinRoom(ChatRoom* room) {
    room->registerUser(this);
}

void User::send(const std::string& message, ChatRoom* room) {
    addCommand(new SendMessageCommand(room, this, message));
    addCommand(new SaveMessageCommand(room, this, message));
    executeAll();
}

void User::receive(const std::string& message, User* fromUser) {
    std::cout << name << " received from " << fromUser->getName() << ": " << message << std::endl;
}

void User::addCommand(Command* command) {
    commandQueue.push_back(command);
}

void User::executeAll() {
    for (size_t i = 0; i < commandQueue.size(); i++) {
        commandQueue[i]->execute();
        delete commandQueue[i];
    }
    commandQueue.clear();
}
