//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#include "CareTaker.h"

CareTaker::CareTaker(int c) : count(0), capacity(c){
    history = new Memento*[capacity];
}

CareTaker::~CareTaker(){
    for (int i = 0; i < count; i++){
        delete history[i];
    }
    delete[] history;
}

void CareTaker::addMemento(Memento* m){
    if(count < capacity){
        history[count++] = m;
    } else{
        Memento** newHistory = new Memento*[capacity * 2];
        for(int i = 0; i < count; i++){
            newHistory[i] = history[i];
        }
        delete[] history;
        history = newHistory;
        capacity *= 2;

        history[count++] = m;
    }
}

Memento* CareTaker::getLastMemento(){
    if(count > 0){
        return history[--count];
    }
    return NULL;
}