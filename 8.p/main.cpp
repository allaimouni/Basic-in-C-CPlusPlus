#include<iostream>
#include"Audio.h"
#include"Bild.h"

int main(){
    Audio a {"alma",1999,"Alia",3};
     a.druckeDaten();
     Audio b{"Massa",2001,"Alia",4};
     b.druckeDaten();
     Bild c {"sivan",1999,"laila"};
     c.druckeDaten();
     Medium * array[2];
     array[1]=&a;
     array[0]=&b;
     array[0]->druckeDaten();
    array[1]->druckeDaten();
}