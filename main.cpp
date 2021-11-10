#include <iostream>
#include "Athlete.h"
#include "LinkedList.cpp"

using namespace std;

int main() {

    LinkedList<Athlete>* athletes = new LinkedList<Athlete>();

    athletes->addNodeFirst(Athlete("Usain Bolt", "1", "Jamaica", "Atletismo", 35, 1.95, 92) );
    athletes->addNodeFirst( Athlete("Caterine Ibargüen", "79", "Colombia", "Atletismo", 37, 1.8, 70) );
    athletes->addNodeFirst(Athlete("Anthony Zambrano", "2", "Colombia", "Atletismo", 23, 1.84, 72));
    athletes->addNodeFirst(Athlete("Michael Phels", "3", "USA", "Natacion", 36, 1.93, 90));

    cout<< "---Atletas_First---" <<endl;
    for( Athlete athlete : athletes->getLinkedList() ) {
        cout<< " - " << athlete <<endl;
    }

    athletes->addNodeLast(Athlete("Usain Bolt", "1", "Jamaica", "Atletismo", 35, 1.95, 92) );
    athletes->addNodeLast( Athlete("Caterine Ibargüen", "79", "Colombia", "Atletismo", 37, 1.8, 70) );
    athletes->addNodeLast(Athlete("Anthony Zambrano", "2", "Colombia", "Atletismo", 23, 1.84, 72));
    athletes->addNodeLast(Athlete("Michael Phels", "3", "USA", "Natacion", 36, 1.93, 90));

    cout<< "---Atletas_last---" <<endl;
    for( Athlete athlete : athletes->getLinkedList() ) {
        cout<< " - " << athlete <<endl;
    }


    if ( athletes->findInfo("79") != NULL ) {
        Athlete *athl =  athletes->findInfo("79");
        cout<< athl <<endl;
    } else {
        cout << "No encontrado" <<endl;
    }


    return 0;
}
