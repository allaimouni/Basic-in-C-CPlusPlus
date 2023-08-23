#include "Medium.h"
#include<stdio.h>
using namespace std;


int Medium::x=0; 
 
 Medium:: Medium(std::string title, int jahr) : title{title}, jahr{jahr} {
   x++;
 }

 int  Medium ::alter(){
    return 2022- Medium ::getJahr();
 }


    