#include "CtrlCat.h"
#include "Dogorithm.h"
#include "Users.h"

int main() {
    CtrlCat ctrlCatRoom;
    Dogorithm dogorithmRoom;

    User alice("Alice");
    User bob("Bob");
    User charlie("Charlie");

    alice.joinRoom(&ctrlCatRoom);
    alice.joinRoom(&dogorithmRoom);

    bob.joinRoom(&ctrlCatRoom);
    charlie.joinRoom(&dogorithmRoom);

    alice.send("Hello from Alice!", &ctrlCatRoom);
    bob.send("Hi Alice!", &ctrlCatRoom);
    charlie.send("Dogorithm is the best!", &dogorithmRoom);
    alice.send("I love both cats and dogs!", &dogorithmRoom);

    std::cout << "\nCtrlCat Room History:\n";
    for (size_t i = 0; i < ctrlCatRoom.getHistory().size(); i++) {
        std::cout << ctrlCatRoom.getHistory()[i] << std::endl;
    }

    std::cout << "\nDogorithm Room History:\n";
    for (size_t i = 0; i < dogorithmRoom.getHistory().size(); i++) {
        std::cout << dogorithmRoom.getHistory()[i] << std::endl;
    }

    return 0;
}
