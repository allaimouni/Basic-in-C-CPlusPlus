#include"linkedList.h"
#include<iostream>
#include<string.h>

void ausgabe(const char* text){
std::cout << text << std::endl;
}
// Test der LinkedList-Klasse
int main(){
using namespace std;
cout<<"iam here";
linkedList liste;
liste.append("Element 1");
liste.insert("Element 2", 2);
liste.printlist();
linkedList liste2 = liste;
cout << "Liste:" << endl;

liste.visit_all(ausgabe);
liste.remove(2);
cout << "Liste:" << endl;
liste.visit_all(ausgabe);
cout << "Liste2:" << endl;
liste2.visit_all(ausgabe);
return 0;
}