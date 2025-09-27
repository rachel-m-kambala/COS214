#include "User.h"
#include "ChatRoom.h"
#include "SendMessageCommand.h"
#include "SaveMessageCommand.h"

User::User(const std::string& n) : name(n) {}

User::~User() {
    for (std::vector<Command*>::iterator it = commandQueue.begin(); it != commandQueue.end(); ++it) {
        delete *it;
    }
}

std::string User::getName() const {
    return name;
}

void User::joinRoom(ChatRoom* room) {
    chatRooms.push_back(room);
    room->registerUser(this);
}

void User::leaveRoom(ChatRoom* room) {
    for (std::vector<ChatRoom*>::iterator it = chatRooms.begin(); it != chatRooms.end(); ++it) {
        if (*it == room) {
            chatRooms.erase(it);
            break;
        }
    }
    room->removeUser(this);
}

void User::addCommand(Command* command) {
    commandQueue.push_back(command);
}

void User::executeAll() {
    for (std::vector<Command*>::iterator it = commandQueue.begin(); it != commandQueue.end(); ++it) {
        (*it)->execute();
        delete *it;
    }
    commandQueue.clear();
}

void User::send(const std::string& message, ChatRoom* room) {
    addCommand(new SendMessageCommand(room, this, message));
    addCommand(new SaveMessageCommand(room, this, message));
    executeAll();
}

void User::receive(const std::string& message, User* fromUser, ChatRoom* room) {
    std::cout << "[" << name << " received in room] " 
              << fromUser->getName() << ": " << message << std::endl;
}
