#include <iostream>
#include "Athlete.h"
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList<Athlete>* athletes = new LinkedList<Athlete>();

    athletes->addNodeFirst(Athlete("Usain Bolt", "1", "Jamaica", "Atletismo", 35, 1.95, 92) );
    athletes->addNodeFirst( Athlete("Caterine Ibargüen", "79", "Colombia", "Atletismo", 37, 1.8, 70) );
    athletes->addNodeFirst(Athlete("Anthony Zambrano", "2", "Colombia", "Atletismo", 23, 1.84, 72));

    for( Athlete athlete : athletes->getLinkedList() ) {
        cout<< athlete <<endl;
    }

    return 0;
}
