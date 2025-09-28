#include "ChatRoom.h" 
#include "CtrlCat.h"
#include "Dogorithm.h"
#include "Users.h"
#include "Name1.h"
#include "Name2.h"
#include "Name3.h"
#include "Command.h"
#include "SendMessageCommand.h"
#include "SaveMessageCommand.h"
#include "Iterator.h"
#include "ChatRoomIterator.h"
#include "OnlineState.h"
#include "OfflineState.h"
#include "DoNotDisturbState.h"
#include <iostream>

int main() {
    // MEDIATOR DESIGN PATTERN TEST
    CtrlCat ctrlCatRoom;
    Dogorithm dogorithmRoom;

    Name1 user1;
    Name2 user2;
    Name3 user3;

    // Register users in rooms (Mediator)
    ctrlCatRoom.registerUser(&user1);
    ctrlCatRoom.registerUser(&user2);

    dogorithmRoom.registerUser(&user2);
    dogorithmRoom.registerUser(&user3);

    std::cout << "--- Testing Mediator Pattern ---\n";
    user1.send("Hello CtrlCat! (Mediator)", &ctrlCatRoom);
    user2.send("Hi Name1! (Mediator)", &ctrlCatRoom);
    user2.send("Hello Dogorithm! (Mediator)", &dogorithmRoom);
    user3.send("Hey Name2! (Mediator)", &dogorithmRoom);

    // Print chat histories after mediator messages
    std::cout << "\nCtrlCat Chat History (Mediator):\n";
    for (int i = 0; i < ctrlCatRoom.getMessageCount(); ++i)
        std::cout << ctrlCatRoom.getMessageAt(i) << std::endl;

    std::cout << "\nDogorithm Chat History (Mediator):\n";
    for (int i = 0; i < dogorithmRoom.getMessageCount(); ++i)
        std::cout << dogorithmRoom.getMessageAt(i) << std::endl;

    // COMMAND DESIGN PATTERN TEST
    std::cout << "\n--- Testing Command Pattern ---\n";
    user1.addCommand(new SendMessageCommand(&ctrlCatRoom, &user1, "Hello CtrlCat! (Command)"));
    user1.addCommand(new SaveMessageCommand(&ctrlCatRoom, &user1, "Hello CtrlCat! (Command)"));

    user2.addCommand(new SendMessageCommand(&ctrlCatRoom, &user2, "Hi Name1! (Command)"));
    user2.addCommand(new SaveMessageCommand(&ctrlCatRoom, &user2, "Hi Name1! (Command)"));

    user2.addCommand(new SendMessageCommand(&dogorithmRoom, &user2, "Hello Dogorithm! (Command)"));
    user2.addCommand(new SaveMessageCommand(&dogorithmRoom, &user2, "Hello Dogorithm! (Command)"));

    user3.addCommand(new SendMessageCommand(&dogorithmRoom, &user3, "Hey Name2! (Command)"));
    user3.addCommand(new SaveMessageCommand(&dogorithmRoom, &user3, "Hey Name2! (Command)"));

    user1.executeAll();
    user2.executeAll();
    user3.executeAll();

    // Print chat histories after command messages
    std::cout << "\nCtrlCat Chat History (Command):\n";
    for (int i = 0; i < ctrlCatRoom.getMessageCount(); ++i)
        std::cout << ctrlCatRoom.getMessageAt(i) << std::endl;

    std::cout << "\nDogorithm Chat History (Command):\n";
    for (int i = 0; i < dogorithmRoom.getMessageCount(); ++i)
        std::cout << dogorithmRoom.getMessageAt(i) << std::endl;

  
    // ITERATOR DESIGN PATTERN TEST
    std::cout << "\n--- Testing Iterator Pattern ---\n";

    Iterator* ctrlCatIterator = ctrlCatRoom.createIterator();
    std::cout << "Users in CtrlCat:\n";
    for (ctrlCatIterator->first(); !ctrlCatIterator->isDone(); ctrlCatIterator->next()) {
        User* u = ctrlCatIterator->currentItem();
        std::cout << "- " << u->getName() << std::endl;
    }
    delete ctrlCatIterator;

    Iterator* dogorithmIterator = dogorithmRoom.createIterator();
    std::cout << "Users in Dogorithm:\n";
    for (dogorithmIterator->first(); !dogorithmIterator->isDone(); dogorithmIterator->next()) {
        User* u = dogorithmIterator->currentItem();
        std::cout << "- " << u->getName() << std::endl;
    }
    delete dogorithmIterator;

    // STATE DESIGN PATTERN TEST
    std::cout << "\n--- Testing State Pattern ---\n";

    // Create states
    OnlineState online;
    OfflineState offline;
    DoNotDisturbState dnd;

    // Assign states to users
    user1.setState(&online);
    user2.setState(&offline);
    user3.setState(&dnd);

    std::cout << user1.getName() << " state: " << user1.getStateName() << std::endl;
    std::cout << user2.getName() << " state: " << user2.getStateName() << std::endl;
    std::cout << user3.getName() << " state: " << user3.getStateName() << std::endl;

    // Test sending messages via state
    std::cout << "\nState-based sending:\n";
    user1.sendMessageWithState("Hello everyone from user1 (State)!");
    user2.sendMessageWithState("Hello everyone from user2 (State)!");
    user3.sendMessageWithState("Hello everyone from user3 (State)!");

    return 0;
}
