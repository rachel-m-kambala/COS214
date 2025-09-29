#include "ChatRoom.h"
#include "ChatRoomIterator.h"

Iterator* ChatRoom::createIterator() {
    return new ChatRoomIterator(this);
}

ChatRoom::ChatRoom() {}

ChatRoom::~ChatRoom() {}

void ChatRoom::sendMessage(const std::string& message, User* fromUser) {
    for (size_t i = 0; i < users.size(); i++) {
        if (users[i] != fromUser) {
            users[i]->receive(message, fromUser, this);
        }
    }
}

void ChatRoom::saveMessage(const std::string& message, User* fromUser) {
    chatHistory.push_back(fromUser->getName() + ": " + message);
}

int ChatRoom::getUserCount() {
    return users.size();
}

User* ChatRoom::getUserAt(int index) {
    if (index >= 0 && index < (int)users.size())
        return users[index];
    return NULL;
}

int ChatRoom::getMessageCount() {
    return chatHistory.size();
}

std::string ChatRoom::getMessageAt(int index) {
    if (index >= 0 && index < (int)chatHistory.size())
        return chatHistory[index];
    return "";
}

void ChatRoom::broadcast(const std::string& message, User* fromUser) {
    chatHistory.push_back(fromUser->getName() + ": " + message);
    for (auto& user : users) {
        if (user != fromUser) { 
            user->receive(message, fromUser, this);
        }
    }
}