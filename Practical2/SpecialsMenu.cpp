//MUKAJI MWENI RACHEL KAMBALA u23559129
//JERUSHA THAVER u23686376

#include "SpecialsMenu.h"

void SpecialsMenu::notifyObservers(std::string message) {
    for (Observer* observer : observers) {
        observer->update("[-----Specials Menu Update-----]:\n" + message);
    }
}