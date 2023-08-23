#include <iostream>
#include "linkedList.h"
#include"iterator.h"
#include "Audio.h"
#include "Bild.h"
#include "Medium.h"

 void ausgabe(Medium* media){
 media->druckeDaten() ;
}
/*void loesche(Medium* media){
 list->remove(0);
}*/

int main() {
    linkedList<Medium*> *mediaList=new linkedList<Medium*>;

    // Audio-Objekt erstellen und zur Liste hinzufügen
    Audio* audio1 = new Audio("alma",1999,"Alia",3);
   mediaList->append(audio1);

    // Bild-Objekt erstellen und zur Liste hinzufügen
    Bild* bild1 = new Bild("sivan",1999,"laila");
    mediaList->append(bild1);
    
std::cout<<"iam here";
    Iterator<Medium*>* iterator = mediaList->iterator();
    while (iterator->hasNext()) {
        Medium* media = iterator->next();
        media->druckeDaten();

}
    delete iterator;
    mediaList->visit_all(&ausgabe);
mediaList->printlist();
std::cout<<"empty";
    return 0;
}
