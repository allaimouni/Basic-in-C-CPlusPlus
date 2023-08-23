
#include "Audio.h"
#include <iostream>

Audio::Audio(string title, int jahr, string interpreter, int dauer) : 
                Medium(title,jahr), interpreter{interpreter} , dauer(dauer){
                     
                }

void Audio :: druckeDaten(){
   std::cout<<"ID="<< getId()
   <<getTitle() << getJahr()<<getInterpreter()<<getDauer()<<std::endl;
}