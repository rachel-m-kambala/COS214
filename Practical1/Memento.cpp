//Mukaji Mweni Rachel Kambala u23559129
//Jerusha Thaver u23686376

#include "Memento.h"

Memento::Memento(Shape** shapes, int count) : count(count){
    this->shapes = new Shape*[count];
    for(int i = 0; i < count; i++){
        this->shapes[i] = shapes[i]->clone();
    }
}

Memento::~Memento(){
    for(int i = 0; i < count; i++){
        delete shapes[i];
    }
    delete[] shapes;
}

Shape** Memento::getState() const{
    return shapes;
}
