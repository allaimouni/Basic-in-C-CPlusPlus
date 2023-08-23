
#include "Bild.h"
#include <iostream>
#include<string>
using namespace std;

Bild::Bild(string title, int jahr, string ort) : 
                Medium(title,jahr), ort{ort} {} 

void Bild :: druckeDaten(){
   std::cout<<"ID="<< getId()
   <<getTitle() << getJahr()<<getOrt()<<std::endl;
}